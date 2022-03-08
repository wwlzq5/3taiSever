/****************************************************************************
** Meta object code from reading C++ file 'widget_count.h'
**
** Created: Tue Mar 8 15:12:41 2022
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widget_count.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget_count.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_widget_count[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,
      32,   13,   13,   13, 0x05,
      49,   13,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      69,   13,   13,   13, 0x08,
      86,   13,   13,   13, 0x08,
     114,   13,   13,   13, 0x08,
     146,   13,   13,   13, 0x08,
     169,   13,   13,   13, 0x08,
     196,   13,   13,   13, 0x08,
     223,   13,   13,   13, 0x08,
     252,   13,   13,   13, 0x08,
     278,   13,   13,   13, 0x08,
     306,   13,   13,   13, 0x08,
     331,   13,   13,   13, 0x08,
     358,   13,   13,   13, 0x08,
     408,  384,   13,   13, 0x0a,
     457,  445,   13,   13, 0x0a,
     502,  488,   13,   13, 0x0a,
     574,  557,   13,   13, 0x0a,
     613,  445,   13,   13, 0x0a,
     645,  445,   13,   13, 0x0a,
     725,  693,   13,   13, 0x0a,
     798,  488,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_widget_count[] = {
    "widget_count\0\0updateRecordSet()\0"
    "updateShiftSet()\0signal_SaveRecord()\0"
    "slots_turnPage()\0slot_saveRecordOK_clicked()\0"
    "slot_saveRecordCancel_clicked()\0"
    "slot_shiftOK_clicked()\0"
    "slot_shiftCancel_clicked()\0"
    "slots_ShowPie(QModelIndex)\0"
    "slot_HistorySearch_clicked()\0"
    "slot_OpenRecord_clicked()\0"
    "slot_DeleteRecord_clicked()\0"
    "slot_OpenExcel_clicked()\0"
    "slot_SearchShift_clicked()\0"
    "slot_SaveRecord_clicked()\0"
    "total,failNum,modelRate\0"
    "slots_updateCountInfo(int,int,float)\0"
    "pCountdates\0slots_UpdateTable1(cErrorInfo)\0"
    "pTimes,pInfos\0"
    "slots_UpdateTable2(QList<long long>,QList<cErrorInfo>)\0"
    "ptime,pCountdate\0"
    "slots_UpdateTable2(QString,cErrorInfo)\0"
    "slots_ShowPieImage1(cErrorInfo)\0"
    "slots_ShowPieImage2(QList<cErrorTypeCountInfo>)\0"
    "startTime,endTime,pTimes,pInfos\0"
    "slots_ShowShiftIamge(QString,QString,QList<long long>,QList<cErrorInfo"
    ">)\0"
    "slots_ShowShiftIamge(QList<long long>,QList<cErrorInfo>)\0"
};

void widget_count::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        widget_count *_t = static_cast<widget_count *>(_o);
        switch (_id) {
        case 0: _t->updateRecordSet(); break;
        case 1: _t->updateShiftSet(); break;
        case 2: _t->signal_SaveRecord(); break;
        case 3: _t->slots_turnPage(); break;
        case 4: _t->slot_saveRecordOK_clicked(); break;
        case 5: _t->slot_saveRecordCancel_clicked(); break;
        case 6: _t->slot_shiftOK_clicked(); break;
        case 7: _t->slot_shiftCancel_clicked(); break;
        case 8: _t->slots_ShowPie((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 9: _t->slot_HistorySearch_clicked(); break;
        case 10: _t->slot_OpenRecord_clicked(); break;
        case 11: _t->slot_DeleteRecord_clicked(); break;
        case 12: _t->slot_OpenExcel_clicked(); break;
        case 13: _t->slot_SearchShift_clicked(); break;
        case 14: _t->slot_SaveRecord_clicked(); break;
        case 15: _t->slots_updateCountInfo((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 16: _t->slots_UpdateTable1((*reinterpret_cast< cErrorInfo(*)>(_a[1]))); break;
        case 17: _t->slots_UpdateTable2((*reinterpret_cast< QList<long long>(*)>(_a[1])),(*reinterpret_cast< QList<cErrorInfo>(*)>(_a[2]))); break;
        case 18: _t->slots_UpdateTable2((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< cErrorInfo(*)>(_a[2]))); break;
        case 19: _t->slots_ShowPieImage1((*reinterpret_cast< cErrorInfo(*)>(_a[1]))); break;
        case 20: _t->slots_ShowPieImage2((*reinterpret_cast< QList<cErrorTypeCountInfo>(*)>(_a[1]))); break;
        case 21: _t->slots_ShowShiftIamge((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QList<long long>(*)>(_a[3])),(*reinterpret_cast< QList<cErrorInfo>(*)>(_a[4]))); break;
        case 22: _t->slots_ShowShiftIamge((*reinterpret_cast< QList<long long>(*)>(_a[1])),(*reinterpret_cast< QList<cErrorInfo>(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData widget_count::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject widget_count::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_widget_count,
      qt_meta_data_widget_count, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &widget_count::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *widget_count::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *widget_count::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_widget_count))
        return static_cast<void*>(const_cast< widget_count*>(this));
    return QWidget::qt_metacast(_clname);
}

int widget_count::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    }
    return _id;
}

// SIGNAL 0
void widget_count::updateRecordSet()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void widget_count::updateShiftSet()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void widget_count::signal_SaveRecord()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
static const uint qt_meta_data_ExportExcelThread[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_ExportExcelThread[] = {
    "ExportExcelThread\0"
};

void ExportExcelThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ExportExcelThread::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ExportExcelThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_ExportExcelThread,
      qt_meta_data_ExportExcelThread, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ExportExcelThread::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ExportExcelThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ExportExcelThread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ExportExcelThread))
        return static_cast<void*>(const_cast< ExportExcelThread*>(this));
    return QThread::qt_metacast(_clname);
}

int ExportExcelThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
