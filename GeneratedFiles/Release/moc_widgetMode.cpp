/****************************************************************************
** Meta object code from reading C++ file 'widgetMode.h'
**
** Created: Thu Aug 11 14:23:12 2022
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgetMode.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widgetMode.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_widget_Mode[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   13,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      51,   12,   12,   12, 0x0a,
      66,   12,   12,   12, 0x0a,
      82,   12,   12,   12, 0x0a,
     100,   12,   12,   12, 0x0a,
     119,   12,   12,   12, 0x0a,
     134,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_widget_Mode[] = {
    "widget_Mode\0\0,\0signal_ModeState(StateEnum,QString)\0"
    "slot_Refresh()\0slot_loadMode()\0"
    "slot_deleteMode()\0slot_showAddMode()\0"
    "slot_addMode()\0slots_ShowSelectImage(QModelIndex)\0"
};

void widget_Mode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        widget_Mode *_t = static_cast<widget_Mode *>(_o);
        switch (_id) {
        case 0: _t->signal_ModeState((*reinterpret_cast< StateEnum(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->slot_Refresh(); break;
        case 2: _t->slot_loadMode(); break;
        case 3: _t->slot_deleteMode(); break;
        case 4: _t->slot_showAddMode(); break;
        case 5: _t->slot_addMode(); break;
        case 6: _t->slots_ShowSelectImage((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData widget_Mode::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject widget_Mode::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_widget_Mode,
      qt_meta_data_widget_Mode, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &widget_Mode::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *widget_Mode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *widget_Mode::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_widget_Mode))
        return static_cast<void*>(const_cast< widget_Mode*>(this));
    return QWidget::qt_metacast(_clname);
}

int widget_Mode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void widget_Mode::signal_ModeState(StateEnum _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
