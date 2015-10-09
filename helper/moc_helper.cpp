/****************************************************************************
** Meta object code from reading C++ file 'helper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "helper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'helper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_UFW__Helper_t {
    QByteArrayData data[7];
    char stringdata[51];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UFW__Helper_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UFW__Helper_t qt_meta_stringdata_UFW__Helper = {
    {
QT_MOC_LITERAL(0, 0, 11), // "UFW::Helper"
QT_MOC_LITERAL(1, 12, 5), // "query"
QT_MOC_LITERAL(2, 18, 11), // "ActionReply"
QT_MOC_LITERAL(3, 30, 0), // ""
QT_MOC_LITERAL(4, 31, 4), // "args"
QT_MOC_LITERAL(5, 36, 7), // "viewlog"
QT_MOC_LITERAL(6, 44, 6) // "modify"

    },
    "UFW::Helper\0query\0ActionReply\0\0args\0"
    "viewlog\0modify"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UFW__Helper[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    3, 0x0a /* Public */,
       5,    1,   32,    3, 0x0a /* Public */,
       6,    1,   35,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, QMetaType::QVariantMap,    4,
    0x80000000 | 2, QMetaType::QVariantMap,    4,
    0x80000000 | 2, QMetaType::QVariantMap,    4,

       0        // eod
};

void UFW::Helper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Helper *_t = static_cast<Helper *>(_o);
        switch (_id) {
        case 0: { ActionReply _r = _t->query((*reinterpret_cast< const QVariantMap(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< ActionReply*>(_a[0]) = _r; }  break;
        case 1: { ActionReply _r = _t->viewlog((*reinterpret_cast< const QVariantMap(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< ActionReply*>(_a[0]) = _r; }  break;
        case 2: { ActionReply _r = _t->modify((*reinterpret_cast< const QVariantMap(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< ActionReply*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject UFW::Helper::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UFW__Helper.data,
      qt_meta_data_UFW__Helper,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *UFW::Helper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UFW::Helper::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_UFW__Helper.stringdata))
        return static_cast<void*>(const_cast< Helper*>(this));
    return QObject::qt_metacast(_clname);
}

int UFW::Helper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
