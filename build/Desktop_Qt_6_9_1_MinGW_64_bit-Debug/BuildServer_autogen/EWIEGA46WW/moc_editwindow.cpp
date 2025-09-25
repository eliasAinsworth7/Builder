/****************************************************************************
** Meta object code from reading C++ file 'editwindow.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../editwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'editwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN10EditWindowE_t {};
} // unnamed namespace

template <> constexpr inline auto EditWindow::qt_create_metaobjectdata<qt_meta_tag_ZN10EditWindowE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "EditWindow",
        "windowClosed",
        "",
        "getTimeEdit",
        "QTimeEdit*",
        "onIntervalCheckBoxStateChanged",
        "Qt::CheckState",
        "q",
        "onScheduledCheckBoxStateChanged",
        "setupCheckBoxes",
        "setupSpinBoxes",
        "setupTimeEdit",
        "setupInfo",
        "setupIntervalsValues",
        "setupScheduledValue",
        "connectionForCheckBoxes"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'windowClosed'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'getTimeEdit'
        QtMocHelpers::SlotData<QTimeEdit *()>(3, 2, QMC::AccessPublic, 0x80000000 | 4),
        // Slot 'onIntervalCheckBoxStateChanged'
        QtMocHelpers::SlotData<void(Qt::CheckState)>(5, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 6, 7 },
        }}),
        // Slot 'onScheduledCheckBoxStateChanged'
        QtMocHelpers::SlotData<void(Qt::CheckState)>(8, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 6, 7 },
        }}),
        // Slot 'setupCheckBoxes'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'setupSpinBoxes'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'setupTimeEdit'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'setupInfo'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'setupIntervalsValues'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'setupScheduledValue'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'connectionForCheckBoxes'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<EditWindow, qt_meta_tag_ZN10EditWindowE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject EditWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10EditWindowE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10EditWindowE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10EditWindowE_t>.metaTypes,
    nullptr
} };

void EditWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<EditWindow *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->windowClosed(); break;
        case 1: { QTimeEdit* _r = _t->getTimeEdit();
            if (_a[0]) *reinterpret_cast< QTimeEdit**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->onIntervalCheckBoxStateChanged((*reinterpret_cast< std::add_pointer_t<Qt::CheckState>>(_a[1]))); break;
        case 3: _t->onScheduledCheckBoxStateChanged((*reinterpret_cast< std::add_pointer_t<Qt::CheckState>>(_a[1]))); break;
        case 4: _t->setupCheckBoxes(); break;
        case 5: _t->setupSpinBoxes(); break;
        case 6: _t->setupTimeEdit(); break;
        case 7: _t->setupInfo(); break;
        case 8: _t->setupIntervalsValues(); break;
        case 9: _t->setupScheduledValue(); break;
        case 10: _t->connectionForCheckBoxes(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (EditWindow::*)()>(_a, &EditWindow::windowClosed, 0))
            return;
    }
}

const QMetaObject *EditWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EditWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10EditWindowE_t>.strings))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int EditWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void EditWindow::windowClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
