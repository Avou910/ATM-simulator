/****************************************************************************
** Meta object code from reading C++ file 'dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../dllpincode/dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Dialog_t {
    QByteArrayData data[17];
    char stringdata0[264];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Dialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Dialog_t qt_meta_stringdata_Dialog = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Dialog"
QT_MOC_LITERAL(1, 7, 7), // "sendPIN"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 11), // "sendloginId"
QT_MOC_LITERAL(4, 28, 18), // "on_Button1_clicked"
QT_MOC_LITERAL(5, 47, 18), // "on_Button2_clicked"
QT_MOC_LITERAL(6, 66, 18), // "on_Button3_clicked"
QT_MOC_LITERAL(7, 85, 18), // "on_Button4_clicked"
QT_MOC_LITERAL(8, 104, 18), // "on_Button5_clicked"
QT_MOC_LITERAL(9, 123, 18), // "on_Button6_clicked"
QT_MOC_LITERAL(10, 142, 18), // "on_Button7_clicked"
QT_MOC_LITERAL(11, 161, 18), // "on_Button8_clicked"
QT_MOC_LITERAL(12, 180, 18), // "on_Button9_clicked"
QT_MOC_LITERAL(13, 199, 18), // "on_Button0_clicked"
QT_MOC_LITERAL(14, 218, 16), // "on_Enter_clicked"
QT_MOC_LITERAL(15, 235, 17), // "on_Delete_clicked"
QT_MOC_LITERAL(16, 253, 10) // "updateTime"

    },
    "Dialog\0sendPIN\0\0sendloginId\0"
    "on_Button1_clicked\0on_Button2_clicked\0"
    "on_Button3_clicked\0on_Button4_clicked\0"
    "on_Button5_clicked\0on_Button6_clicked\0"
    "on_Button7_clicked\0on_Button8_clicked\0"
    "on_Button9_clicked\0on_Button0_clicked\0"
    "on_Enter_clicked\0on_Delete_clicked\0"
    "updateTime"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Dialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x06 /* Public */,
       3,    1,   92,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   95,    2, 0x08 /* Private */,
       5,    0,   96,    2, 0x08 /* Private */,
       6,    0,   97,    2, 0x08 /* Private */,
       7,    0,   98,    2, 0x08 /* Private */,
       8,    0,   99,    2, 0x08 /* Private */,
       9,    0,  100,    2, 0x08 /* Private */,
      10,    0,  101,    2, 0x08 /* Private */,
      11,    0,  102,    2, 0x08 /* Private */,
      12,    0,  103,    2, 0x08 /* Private */,
      13,    0,  104,    2, 0x08 /* Private */,
      14,    0,  105,    2, 0x08 /* Private */,
      15,    0,  106,    2, 0x08 /* Private */,
      16,    0,  107,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Dialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Dialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendPIN((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->sendloginId((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->on_Button1_clicked(); break;
        case 3: _t->on_Button2_clicked(); break;
        case 4: _t->on_Button3_clicked(); break;
        case 5: _t->on_Button4_clicked(); break;
        case 6: _t->on_Button5_clicked(); break;
        case 7: _t->on_Button6_clicked(); break;
        case 8: _t->on_Button7_clicked(); break;
        case 9: _t->on_Button8_clicked(); break;
        case 10: _t->on_Button9_clicked(); break;
        case 11: _t->on_Button0_clicked(); break;
        case 12: _t->on_Enter_clicked(); break;
        case 13: _t->on_Delete_clicked(); break;
        case 14: _t->updateTime(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Dialog::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Dialog::sendPIN)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Dialog::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Dialog::sendloginId)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Dialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_Dialog.data,
    qt_meta_data_Dialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Dialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void Dialog::sendPIN(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Dialog::sendloginId(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
