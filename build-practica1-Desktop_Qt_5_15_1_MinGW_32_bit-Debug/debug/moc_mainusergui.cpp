/****************************************************************************
** Meta object code from reading C++ file 'mainusergui.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../practica1-Qt-2021/mainusergui.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainusergui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainUserGUI_t {
    QByteArrayData data[20];
    char stringdata0[300];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainUserGUI_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainUserGUI_t qt_meta_stringdata_MainUserGUI = {
    {
QT_MOC_LITERAL(0, 0, 11), // "MainUserGUI"
QT_MOC_LITERAL(1, 12, 10), // "cambiaLEDs"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 17), // "tivaStatusChanged"
QT_MOC_LITERAL(4, 42, 6), // "status"
QT_MOC_LITERAL(5, 49, 7), // "message"
QT_MOC_LITERAL(6, 57, 15), // "messageReceived"
QT_MOC_LITERAL(7, 73, 7), // "uint8_t"
QT_MOC_LITERAL(8, 81, 4), // "type"
QT_MOC_LITERAL(9, 86, 5), // "datos"
QT_MOC_LITERAL(10, 92, 20), // "on_runButton_clicked"
QT_MOC_LITERAL(11, 113, 41), // "on_serialPortComboBox_current..."
QT_MOC_LITERAL(12, 155, 4), // "arg1"
QT_MOC_LITERAL(13, 160, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(14, 182, 26), // "on_colorWheel_colorChanged"
QT_MOC_LITERAL(15, 209, 20), // "on_Knob_valueChanged"
QT_MOC_LITERAL(16, 230, 5), // "value"
QT_MOC_LITERAL(17, 236, 20), // "on_ADCButton_clicked"
QT_MOC_LITERAL(18, 257, 21), // "on_pingButton_clicked"
QT_MOC_LITERAL(19, 279, 20) // "on_SondeoBTN_clicked"

    },
    "MainUserGUI\0cambiaLEDs\0\0tivaStatusChanged\0"
    "status\0message\0messageReceived\0uint8_t\0"
    "type\0datos\0on_runButton_clicked\0"
    "on_serialPortComboBox_currentIndexChanged\0"
    "arg1\0on_pushButton_clicked\0"
    "on_colorWheel_colorChanged\0"
    "on_Knob_valueChanged\0value\0"
    "on_ADCButton_clicked\0on_pingButton_clicked\0"
    "on_SondeoBTN_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainUserGUI[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    2,   70,    2, 0x08 /* Private */,
       6,    2,   75,    2, 0x08 /* Private */,
      10,    0,   80,    2, 0x08 /* Private */,
      11,    1,   81,    2, 0x08 /* Private */,
      13,    0,   84,    2, 0x08 /* Private */,
      14,    1,   85,    2, 0x08 /* Private */,
      15,    1,   88,    2, 0x08 /* Private */,
      17,    0,   91,    2, 0x08 /* Private */,
      18,    0,   92,    2, 0x08 /* Private */,
      19,    0,   93,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    4,    5,
    QMetaType::Void, 0x80000000 | 7, QMetaType::QByteArray,    8,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QColor,   12,
    QMetaType::Void, QMetaType::Double,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainUserGUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainUserGUI *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->cambiaLEDs(); break;
        case 1: _t->tivaStatusChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->messageReceived((*reinterpret_cast< uint8_t(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 3: _t->on_runButton_clicked(); break;
        case 4: _t->on_serialPortComboBox_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_pushButton_clicked(); break;
        case 6: _t->on_colorWheel_colorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 7: _t->on_Knob_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->on_ADCButton_clicked(); break;
        case 9: _t->on_pingButton_clicked(); break;
        case 10: _t->on_SondeoBTN_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainUserGUI::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_MainUserGUI.data,
    qt_meta_data_MainUserGUI,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainUserGUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainUserGUI::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainUserGUI.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int MainUserGUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
