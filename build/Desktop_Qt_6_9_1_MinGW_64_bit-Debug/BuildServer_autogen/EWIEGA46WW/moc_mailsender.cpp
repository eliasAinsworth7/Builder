/****************************************************************************
** Meta object code from reading C++ file 'mailsender.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../mailsender.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mailsender.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN10MailSenderE_t {};
} // unnamed namespace

template <> constexpr inline auto MailSender::qt_create_metaobjectdata<qt_meta_tag_ZN10MailSenderE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "MailSender",
        "sendFinished",
        "",
        "windowClosed",
        "sendMail",
        "payloadSource",
        "size_t",
        "ptr",
        "size",
        "nmemb",
        "userp",
        "startEmailSend",
        "from",
        "to",
        "subject",
        "body",
        "password"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'sendFinished'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'windowClosed'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'sendMail'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'payloadSource'
        QtMocHelpers::SlotData<size_t(void *, size_t, size_t, void *)>(5, 2, QMC::AccessPrivate, 0x80000000 | 6, {{
            { QMetaType::VoidStar, 7 }, { 0x80000000 | 6, 8 }, { 0x80000000 | 6, 9 }, { QMetaType::VoidStar, 10 },
        }}),
        // Slot 'startEmailSend'
        QtMocHelpers::SlotData<void(const QString &, const QString &, const QString &, const QString &, const QString &)>(11, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 12 }, { QMetaType::QString, 13 }, { QMetaType::QString, 14 }, { QMetaType::QString, 15 },
            { QMetaType::QString, 16 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<MailSender, qt_meta_tag_ZN10MailSenderE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject MailSender::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MailSenderE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MailSenderE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10MailSenderE_t>.metaTypes,
    nullptr
} };

void MailSender::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MailSender *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->sendFinished(); break;
        case 1: _t->windowClosed(); break;
        case 2: _t->sendMail(); break;
        case 3: { size_t _r = _t->payloadSource((*reinterpret_cast< std::add_pointer_t<void*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<size_t>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<size_t>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<void*>>(_a[4])));
            if (_a[0]) *reinterpret_cast< size_t*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->startEmailSend((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[5]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (MailSender::*)()>(_a, &MailSender::sendFinished, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (MailSender::*)()>(_a, &MailSender::windowClosed, 1))
            return;
    }
}

const QMetaObject *MailSender::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MailSender::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MailSenderE_t>.strings))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MailSender::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void MailSender::sendFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MailSender::windowClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
