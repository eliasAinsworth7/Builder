/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QQueue>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN10MainWindowE_t {};
} // unnamed namespace

template <> constexpr inline auto MainWindow::qt_create_metaobjectdata<qt_meta_tag_ZN10MainWindowE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "MainWindow",
        "closeAfterCheckBoxChanged",
        "",
        "Qt::CheckState",
        "s",
        "openingInitiations",
        "loadSOlutionsFromFile",
        "filename",
        "saveSolutionsToFile",
        "onNewFileClicked",
        "onDeleteAllClicked",
        "onSetVisualStdClicked",
        "setupDynamicOrder",
        "on_pushButton_2_clicked",
        "setupScheduledBuild",
        "time",
        "setupIntervalBuild",
        "intervalMinute",
        "intervalHour",
        "on_pushButton_3_clicked",
        "buildAllSelectedSolution",
        "runNextBuild",
        "QQueue<BuildTask>*",
        "queue",
        "setMsnbuildPath",
        "path",
        "setSOlutionContainer",
        "setMenuBarButtons",
        "processExitStatus",
        "exitCode",
        "QProcess::ExitStatus",
        "exitStatus",
        "onOpenLogTextStateChanged",
        "t",
        "onSetTimerClicked",
        "setMailClicked",
        "setBodyErrorMessage",
        "QQueue<Solution>",
        "errorMessages",
        "QString*",
        "body",
        "tabButtonConfiguration",
        "menuLogScreenChecked",
        "mailSenderWindowCLosed",
        "getMsBuildPath",
        "setLogScreen",
        "clearButtonClicked"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'closeAfterCheckBoxChanged'
        QtMocHelpers::SlotData<void(Qt::CheckState)>(1, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'openingInitiations'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'loadSOlutionsFromFile'
        QtMocHelpers::SlotData<void(const QString &)>(6, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 7 },
        }}),
        // Slot 'saveSolutionsToFile'
        QtMocHelpers::SlotData<void(const QString &)>(8, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 7 },
        }}),
        // Slot 'onNewFileClicked'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onDeleteAllClicked'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onSetVisualStdClicked'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'setupDynamicOrder'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButton_2_clicked'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'setupScheduledBuild'
        QtMocHelpers::SlotData<void(QTime)>(14, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QTime, 15 },
        }}),
        // Slot 'setupIntervalBuild'
        QtMocHelpers::SlotData<void(int, int)>(16, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 17 }, { QMetaType::Int, 18 },
        }}),
        // Slot 'on_pushButton_3_clicked'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'buildAllSelectedSolution'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'runNextBuild'
        QtMocHelpers::SlotData<void(QQueue<BuildTask> *)>(21, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 22, 23 },
        }}),
        // Slot 'setMsnbuildPath'
        QtMocHelpers::SlotData<void(QString)>(24, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 25 },
        }}),
        // Slot 'setSOlutionContainer'
        QtMocHelpers::SlotData<void()>(26, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'setMenuBarButtons'
        QtMocHelpers::SlotData<void()>(27, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'processExitStatus'
        QtMocHelpers::SlotData<void(int, QProcess::ExitStatus)>(28, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 29 }, { 0x80000000 | 30, 31 },
        }}),
        // Slot 'onOpenLogTextStateChanged'
        QtMocHelpers::SlotData<void(Qt::CheckState)>(32, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 33 },
        }}),
        // Slot 'onSetTimerClicked'
        QtMocHelpers::SlotData<void()>(34, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'setMailClicked'
        QtMocHelpers::SlotData<void()>(35, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'setBodyErrorMessage'
        QtMocHelpers::SlotData<void(QQueue<Solution>, QString *)>(36, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 37, 38 }, { 0x80000000 | 39, 40 },
        }}),
        // Slot 'tabButtonConfiguration'
        QtMocHelpers::SlotData<void()>(41, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'menuLogScreenChecked'
        QtMocHelpers::SlotData<void()>(42, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'mailSenderWindowCLosed'
        QtMocHelpers::SlotData<void()>(43, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'getMsBuildPath'
        QtMocHelpers::SlotData<QString()>(44, 2, QMC::AccessPrivate, QMetaType::QString),
        // Slot 'setLogScreen'
        QtMocHelpers::SlotData<void()>(45, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'clearButtonClicked'
        QtMocHelpers::SlotData<void(bool)>(46, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 33 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<MainWindow, qt_meta_tag_ZN10MainWindowE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MainWindowE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MainWindowE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10MainWindowE_t>.metaTypes,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MainWindow *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->closeAfterCheckBoxChanged((*reinterpret_cast< std::add_pointer_t<Qt::CheckState>>(_a[1]))); break;
        case 1: _t->openingInitiations(); break;
        case 2: _t->loadSOlutionsFromFile((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->saveSolutionsToFile((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->onNewFileClicked(); break;
        case 5: _t->onDeleteAllClicked(); break;
        case 6: _t->onSetVisualStdClicked(); break;
        case 7: _t->setupDynamicOrder(); break;
        case 8: _t->on_pushButton_2_clicked(); break;
        case 9: _t->setupScheduledBuild((*reinterpret_cast< std::add_pointer_t<QTime>>(_a[1]))); break;
        case 10: _t->setupIntervalBuild((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 11: _t->on_pushButton_3_clicked(); break;
        case 12: _t->buildAllSelectedSolution(); break;
        case 13: _t->runNextBuild((*reinterpret_cast< std::add_pointer_t<QQueue<BuildTask>*>>(_a[1]))); break;
        case 14: _t->setMsnbuildPath((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 15: _t->setSOlutionContainer(); break;
        case 16: _t->setMenuBarButtons(); break;
        case 17: _t->processExitStatus((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QProcess::ExitStatus>>(_a[2]))); break;
        case 18: _t->onOpenLogTextStateChanged((*reinterpret_cast< std::add_pointer_t<Qt::CheckState>>(_a[1]))); break;
        case 19: _t->onSetTimerClicked(); break;
        case 20: _t->setMailClicked(); break;
        case 21: _t->setBodyErrorMessage((*reinterpret_cast< std::add_pointer_t<QQueue<Solution>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString*>>(_a[2]))); break;
        case 22: _t->tabButtonConfiguration(); break;
        case 23: _t->menuLogScreenChecked(); break;
        case 24: _t->mailSenderWindowCLosed(); break;
        case 25: { QString _r = _t->getMsBuildPath();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 26: _t->setLogScreen(); break;
        case 27: _t->clearButtonClicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MainWindowE_t>.strings))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 28)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 28;
    }
    return _id;
}
QT_WARNING_POP
