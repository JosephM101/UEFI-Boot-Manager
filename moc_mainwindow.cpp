/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[14];
    char stringdata0[415];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 32), // "on_pushButton_rebootToFW_clicked"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 27), // "refreshAvailableBootDevices"
QT_MOC_LITERAL(4, 73, 17), // "setNextBootDevice"
QT_MOC_LITERAL(5, 91, 2), // "id"
QT_MOC_LITERAL(6, 94, 6), // "reboot"
QT_MOC_LITERAL(7, 101, 40), // "on_pushButton_refreshBootDevi..."
QT_MOC_LITERAL(8, 142, 49), // "on_pushButton_setSelectedAsNe..."
QT_MOC_LITERAL(9, 192, 46), // "on_pushButton_rebootFromSelec..."
QT_MOC_LITERAL(10, 239, 41), // "on_pushButton_clearNextBootDe..."
QT_MOC_LITERAL(11, 281, 47), // "on_pushButton_bootOrder_moveS..."
QT_MOC_LITERAL(12, 329, 49), // "on_pushButton_bootOrder_moveS..."
QT_MOC_LITERAL(13, 379, 35) // "on_pushButton_saveBootOrder_c..."

    },
    "MainWindow\0on_pushButton_rebootToFW_clicked\0"
    "\0refreshAvailableBootDevices\0"
    "setNextBootDevice\0id\0reboot\0"
    "on_pushButton_refreshBootDevices_clicked\0"
    "on_pushButton_setSelectedAsNextBootDevice_clicked\0"
    "on_pushButton_rebootFromSelectedDevice_clicked\0"
    "on_pushButton_clearNextBootDevice_clicked\0"
    "on_pushButton_bootOrder_moveSelectionUp_clicked\0"
    "on_pushButton_bootOrder_moveSelectionDown_clicked\0"
    "on_pushButton_saveBootOrder_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    2,   66,    2, 0x08 /* Private */,
       7,    0,   71,    2, 0x08 /* Private */,
       8,    0,   72,    2, 0x08 /* Private */,
       9,    0,   73,    2, 0x08 /* Private */,
      10,    0,   74,    2, 0x08 /* Private */,
      11,    0,   75,    2, 0x08 /* Private */,
      12,    0,   76,    2, 0x08 /* Private */,
      13,    0,   77,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_pushButton_rebootToFW_clicked(); break;
        case 1: _t->refreshAvailableBootDevices(); break;
        case 2: _t->setNextBootDevice((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->on_pushButton_refreshBootDevices_clicked(); break;
        case 4: _t->on_pushButton_setSelectedAsNextBootDevice_clicked(); break;
        case 5: _t->on_pushButton_rebootFromSelectedDevice_clicked(); break;
        case 6: _t->on_pushButton_clearNextBootDevice_clicked(); break;
        case 7: _t->on_pushButton_bootOrder_moveSelectionUp_clicked(); break;
        case 8: _t->on_pushButton_bootOrder_moveSelectionDown_clicked(); break;
        case 9: _t->on_pushButton_saveBootOrder_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
