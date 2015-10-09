/****************************************************************************
** Meta object code from reading C++ file 'logviewer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "logviewer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'logviewer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_UFW__LogViewer_t {
    QByteArrayData data[10];
    char stringdata[112];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UFW__LogViewer_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UFW__LogViewer_t qt_meta_stringdata_UFW__LogViewer = {
    {
QT_MOC_LITERAL(0, 0, 14), // "UFW::LogViewer"
QT_MOC_LITERAL(1, 15, 12), // "restoreState"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 7), // "refresh"
QT_MOC_LITERAL(4, 37, 13), // "toggleDisplay"
QT_MOC_LITERAL(5, 51, 14), // "queryPerformed"
QT_MOC_LITERAL(6, 66, 11), // "ActionReply"
QT_MOC_LITERAL(7, 78, 5), // "reply"
QT_MOC_LITERAL(8, 84, 10), // "createRule"
QT_MOC_LITERAL(9, 95, 16) // "selectionChanged"

    },
    "UFW::LogViewer\0restoreState\0\0refresh\0"
    "toggleDisplay\0queryPerformed\0ActionReply\0"
    "reply\0createRule\0selectionChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UFW__LogViewer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x0a /* Public */,
       3,    0,   45,    2, 0x0a /* Public */,
       4,    0,   46,    2, 0x0a /* Public */,
       5,    1,   47,    2, 0x0a /* Public */,
       8,    0,   50,    2, 0x0a /* Public */,
       9,    0,   51,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void UFW::LogViewer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LogViewer *_t = static_cast<LogViewer *>(_o);
        switch (_id) {
        case 0: _t->restoreState(); break;
        case 1: _t->refresh(); break;
        case 2: _t->toggleDisplay(); break;
        case 3: _t->queryPerformed((*reinterpret_cast< ActionReply(*)>(_a[1]))); break;
        case 4: _t->createRule(); break;
        case 5: _t->selectionChanged(); break;
        default: ;
        }
    }
}

const QMetaObject UFW::LogViewer::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_UFW__LogViewer.data,
      qt_meta_data_UFW__LogViewer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *UFW::LogViewer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UFW::LogViewer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_UFW__LogViewer.stringdata))
        return static_cast<void*>(const_cast< LogViewer*>(this));
    return QDialog::qt_metacast(_clname);
}

int UFW::LogViewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
