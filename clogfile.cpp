#include "clogfile.h"
#include <QDate>
#include <QSettings>
#include <QApplication>


QString GetCurrentAppPath()
{
	QString AppPath;
	//因为Qt是UNICODE，GetModuXXX第一个参数需要LPWSTR类型
	TCHAR tcStr[MAX_PATH];
	//_splitpath第一个参数需要LPCSTR类型
	char cStr[MAX_PATH];
	char drive[MAX_PATH], dir[_MAX_DIR], fname[_MAX_FNAME], ext[_MAX_EXT];

	GetModuleFileName(NULL, tcStr, sizeof(tcStr));
	//需要把宽字节tcStr转换为多字节cStr
	int iLength ;  	
	iLength = WideCharToMultiByte(CP_ACP, 0, tcStr, -1, NULL, 0, NULL, NULL); 	
	WideCharToMultiByte(CP_ACP, 0, tcStr, -1, cStr, iLength, NULL, NULL); 
	//拆分
	_splitpath_s(cStr, drive, dir, fname, ext);
	strcat_s(drive, dir);
	//多字节再转换为UNICODE，以上可防止中文路径乱码
	AppPath = QString::fromLocal8Bit(drive);	
	return AppPath;
}


WriteLogThread::WriteLogThread(QObject *parent)
	: QThread(parent)
{

}
WriteLogThread::WriteLogThread()
	: QThread()
{
}

WriteLogThread::~WriteLogThread()
{

}
void WriteLogThread::run()
{
	m_bStopThread = false;
	while(!m_bStopThread)
	{
		if (listLog.size()>0)
		{
			mutexLog.lock();
			s_LogInfo sLogInfo = listLog.takeFirst();
			write(sLogInfo.strInfo,sLogInfo.logtype,0);
			mutexLog.unlock();
		}
		Sleep(1);
	}
}
void WriteLogThread::StartThread()
{
	m_bStopThread = false;
	start();
}
void WriteLogThread::StopThread()
{
	m_bStopThread = true;
}
void WriteLogThread::WaitThreadStop()
{
	if (isRunning())
	{
		if (!m_bStopThread)
		{
			m_bStopThread = true;
		}
		wait();
	}
}

void WriteLogThread::Initpath(e_SaveLogType logtype)
{
	QString apppath = GetCurrentAppPath();
	switch(logtype)
	{
	case OperationLog:
		m_strlogfilepath = apppath + "LogFiles/OperationLog/";
		m_strLogInfo = "OperationInfo";
		break;
	case CheckLog:
		m_strlogfilepath = apppath + "LogFiles/CheckLog/";
		m_strLogInfo = "CheckInfo";
		break;
	case MendParamLog:
		m_strlogfilepath = apppath + "LogFiles/MendParamLog/";
		m_strLogInfo = "MendParamInfo";
		break;
	case AbnormityLog:
		m_strlogfilepath = apppath + "LogFiles/AbnormityLog/";		
		m_strLogInfo = "AbnormityInfo";
		break;
	case StatInfo:
		m_strlogfilepath = apppath + "LogFiles/StatInfo/";		
		m_strLogInfo = "StatInfo";
		break;
	case AlgorithmDLL:
		m_strlogfilepath = apppath + "LogFiles/AlgorithmDLL/";
		m_strLogInfo = "AlgorithmInfo";
		break;
	default:
		m_strlogfilepath = apppath + "LogFiles/OtherLog/";
		m_strLogInfo = "OtherInfo";
		break;
	}
}

void WriteLogThread::write(QString strInfo,e_SaveLogType logtype, int showInferface)
{
	if ((0 == showInferface)||(1 == showInferface))
	{
		QDate date = QDate::currentDate();
		QTime time = QTime::currentTime();

		Initpath(logtype);

		QString strFilePath = m_strlogfilepath + date.toString(Qt::ISODate) + ".txt";

		QDir *tempDir = new QDir;
		bool exist = true;
		int i = 0;
		QString strLastFilePath;
		strLastFilePath = strFilePath;
		exist = tempDir->exists(strFilePath);
		while(exist)
		{
			exist = tempDir->exists(strFilePath);
			if (exist)
			{
				strLastFilePath = strFilePath;
				strFilePath = strFilePath+ date.toString(Qt::ISODate)+QString("_%1.txt").arg(++i);
				//strFilePath = m_strlogfilepath + QString("%1-%2-%3_%4.txt").arg(date.year()).arg(date.month()).arg(date.day()).arg(++i);
			}
		}
		delete tempDir;
		tempDir = NULL;

		strFilePath = strLastFilePath;
		QSettings errorSet(strFilePath,QSettings::IniFormat);
		errorSet.setIniCodec("GBK");
		errorSet.beginGroup("setup");
		int nTotalNum = errorSet.value("total",0).toInt();

		if (nTotalNum > 1000)
		{
			nTotalNum = 1;
			strFilePath = m_strlogfilepath+ date.toString(Qt::ISODate)+QString("_%1.txt").arg(i);
			//strFilePath = m_strlogfilepath + QString("%1-%2-%3_%4.txt").arg(date.year()).arg(date.month()).arg(date.day()).arg(i);

			QSettings errorSet(strFilePath,QSettings::IniFormat);
			errorSet.setIniCodec("GBK");
			errorSet.beginGroup("setup");
			nTotalNum = ++nTotalNum;

			errorSet.endGroup();
			errorSet.beginGroup(m_strLogInfo);
			QString errorData = QString("%1-%2-%3 %4:%5:%6 "+strInfo).arg(date.year()).arg(date.month()).\
				arg(date.day()).arg(time.hour()).arg(time.minute()).arg(time.second());
			errorSet.setValue(QString("INFO_%1").arg(nTotalNum),errorData);
			errorSet.endGroup();
			errorSet.beginGroup("setup");
			errorSet.setValue("total",QString::number(nTotalNum));
			errorSet.endGroup();	

		}
		else
		{
			nTotalNum = ++nTotalNum;
			errorSet.endGroup();
			errorSet.beginGroup(m_strLogInfo);
			QString errorData = QString("%1-%2-%3 %4:%5:%6 "+strInfo).arg(date.year()).arg(date.month()).\
				arg(date.day()).arg(time.hour()).arg(time.minute()).arg(time.second());
			errorSet.setValue(QString("INFO_%1").arg(nTotalNum),errorData);
			errorSet.endGroup();
			errorSet.beginGroup("setup");
			errorSet.setValue("total",QString::number(nTotalNum));
			errorSet.endGroup();	
		}
	}
}

CLogFile::CLogFile()
{
	pThreadWriteLog = new WriteLogThread();
	pThreadWriteLog->StartThread();
}

CLogFile::~CLogFile()
{
	pThreadWriteLog->StopThread();
	pThreadWriteLog->WaitThreadStop();
}

void CLogFile::write(QString strInfo,e_SaveLogType logtype, int showInferface)
{
	s_LogInfo sLogInfo;
	sLogInfo.strInfo = strInfo;
	sLogInfo.logtype = logtype;
	pThreadWriteLog->mutexLog.lock();
	pThreadWriteLog->listLog.append(sLogInfo);
	pThreadWriteLog->mutexLog.unlock();
}

