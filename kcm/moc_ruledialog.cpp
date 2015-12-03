/****************************************************************************
** Meta object code from reading C++ file 'ruledialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ruledialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ruledialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_UFW__RuleDialog_t {
    QByteArrayData data[8];
    char stringdata[96];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UFW__RuleDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UFW__RuleDialog_t qt_meta_stringdata_UFW__RuleDialog = {
    {
QT_MOC_LITERAL(0, 0, 15), // "UFW::RuleDialog"
QT_MOC_LITERAL(1, 16, 6), // "update"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 11), // "setRuleType"
QT_MOC_LITERAL(4, 36, 9), // "showError"
QT_MOC_LITERAL(5, 46, 3), // "err"
QT_MOC_LITERAL(6, 50, 21), // "controlSimpleProtocol"
QT_MOC_LITERAL(7, 72, 23) // "controlAdvancedProtocol"

    },
    "UFW::RuleDialog\0update\0\0setRuleType\0"
    "showError\0err\0controlSimpleProtocol\0"
    "controlAdvancedProtocol"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UFW__RuleDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    1,   41,    2, 0x08 /* Private */,
       6,    0,   44,    2, 0x08 /* Private */,
       7,    0,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void UFW::RuleDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RuleDialog *_t = static_cast<RuleDialog *>(_o);
        switch (_id) {
        case 0: _t->update(); break;
        case 1: _t->setRuleType(); break;
        case 2: _t->showError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->controlSimpleProtocol(); break;
        case 4: _t->controlAdvancedProtocol(); break;
        default: ;
        }
    }
}

const QMetaObject UFW::RuleDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_UFW__RuleDialog.data,
      qt_meta_data_UFW__RuleDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *UFW::RuleDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UFW::RuleDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_UFW__RuleDialog.stringdata))
        return static_cast<void*>(const_cast< RuleDialog*>(this));
    if (!strcmp(_clname, "Ui::RuleWidget"))
        return static_cast< Ui::RuleWidget*>(const_cast< RuleDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int UFW::RuleDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
