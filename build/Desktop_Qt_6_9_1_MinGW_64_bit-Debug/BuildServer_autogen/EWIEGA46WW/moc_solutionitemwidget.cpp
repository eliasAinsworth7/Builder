/****************************************************************************
** Meta object code from reading C++ file 'solutionitemwidget.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../solutionitemwidget.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'solutionitemwidget.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN18solutionItemWidgetE_t {};
} // unnamed namespace

template <> constexpr inline auto solutionItemWidget::qt_create_metaobjectdata<qt_meta_tag_ZN18solutionItemWidgetE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "solutionItemWidget",
        "requestDelete",
        "",
        "solutionItemWidget*",
        "self",
        "getIntervalTimeMinutes",
        "getIntervalTimeHour",
        "getScheduledTime",
        "QTime*",
        "getIntervalState",
        "getScheduledState",
        "timeSetUp",
        "IsSelected",
        "isDebugSelected",
        "isCleanSelected",
        "isCleanForDebugSelected",
        "isCleanForReleaseSelected",
        "isReleaseSelected",
        "getSelectedPlatform",
        "platformComboboxInitiate",
        "getDeleteButton",
        "QPushButton*",
        "getLayoutForCheckboxes",
        "QHBoxLayout*",
        "getLayoutForFileChoose",
        "getEditButton",
        "setTitle",
        "title1",
        "setPath",
        "path1",
        "setSelected",
        "selected",
        "setDebug",
        "debuged",
        "setCleaned",
        "cleaned",
        "setCleanForDebug",
        "cleanForDebug",
        "setCleanForRelease",
        "cleanForRelease",
        "setReleased",
        "released",
        "setPlatform",
        "platfrom",
        "connectionForButtons",
        "initiateButtons",
        "initiateCheckBoxes",
        "initiateFilePart",
        "onDeleteButtonClicked",
        "onChooseButtonClicked",
        "onEditButtonClicked",
        "connectDeleteButton",
        "connectEditButton",
        "connectChooseButton",
        "setupForTimerBools",
        "setupHeader",
        "setupSize",
        "setupLayout",
        "setTitleLabel",
        "s",
        "createMainLayout"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'requestDelete'
        QtMocHelpers::SignalData<void(solutionItemWidget *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'getIntervalTimeMinutes'
        QtMocHelpers::SlotData<int()>(5, 2, QMC::AccessPublic, QMetaType::Int),
        // Slot 'getIntervalTimeHour'
        QtMocHelpers::SlotData<int()>(6, 2, QMC::AccessPublic, QMetaType::Int),
        // Slot 'getScheduledTime'
        QtMocHelpers::SlotData<QTime *()>(7, 2, QMC::AccessPublic, 0x80000000 | 8),
        // Slot 'getIntervalState'
        QtMocHelpers::SlotData<bool()>(9, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'getScheduledState'
        QtMocHelpers::SlotData<bool()>(10, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'timeSetUp'
        QtMocHelpers::SlotData<bool()>(11, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'IsSelected'
        QtMocHelpers::SlotData<bool()>(12, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'isDebugSelected'
        QtMocHelpers::SlotData<bool()>(13, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'isCleanSelected'
        QtMocHelpers::SlotData<bool()>(14, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'isCleanForDebugSelected'
        QtMocHelpers::SlotData<bool()>(15, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'isCleanForReleaseSelected'
        QtMocHelpers::SlotData<bool()>(16, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'isReleaseSelected'
        QtMocHelpers::SlotData<bool()>(17, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'getSelectedPlatform'
        QtMocHelpers::SlotData<QString()>(18, 2, QMC::AccessPublic, QMetaType::QString),
        // Slot 'platformComboboxInitiate'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'getDeleteButton'
        QtMocHelpers::SlotData<QPushButton *()>(20, 2, QMC::AccessPublic, 0x80000000 | 21),
        // Slot 'getLayoutForCheckboxes'
        QtMocHelpers::SlotData<QHBoxLayout *()>(22, 2, QMC::AccessPublic, 0x80000000 | 23),
        // Slot 'getLayoutForFileChoose'
        QtMocHelpers::SlotData<QHBoxLayout *()>(24, 2, QMC::AccessPublic, 0x80000000 | 23),
        // Slot 'getEditButton'
        QtMocHelpers::SlotData<QPushButton *()>(25, 2, QMC::AccessPublic, 0x80000000 | 21),
        // Slot 'setTitle'
        QtMocHelpers::SlotData<void(QString)>(26, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 27 },
        }}),
        // Slot 'setPath'
        QtMocHelpers::SlotData<void(QString)>(28, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 29 },
        }}),
        // Slot 'setSelected'
        QtMocHelpers::SlotData<void(bool)>(30, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 31 },
        }}),
        // Slot 'setDebug'
        QtMocHelpers::SlotData<void(bool)>(32, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 33 },
        }}),
        // Slot 'setCleaned'
        QtMocHelpers::SlotData<void(bool)>(34, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 35 },
        }}),
        // Slot 'setCleanForDebug'
        QtMocHelpers::SlotData<void(bool)>(36, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 37 },
        }}),
        // Slot 'setCleanForRelease'
        QtMocHelpers::SlotData<void(bool)>(38, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 39 },
        }}),
        // Slot 'setReleased'
        QtMocHelpers::SlotData<void(bool)>(40, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 41 },
        }}),
        // Slot 'setPlatform'
        QtMocHelpers::SlotData<void(QString)>(42, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 43 },
        }}),
        // Slot 'connectionForButtons'
        QtMocHelpers::SlotData<void()>(44, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'initiateButtons'
        QtMocHelpers::SlotData<void()>(45, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'initiateCheckBoxes'
        QtMocHelpers::SlotData<void()>(46, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'initiateFilePart'
        QtMocHelpers::SlotData<void()>(47, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onDeleteButtonClicked'
        QtMocHelpers::SlotData<void()>(48, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onChooseButtonClicked'
        QtMocHelpers::SlotData<void()>(49, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onEditButtonClicked'
        QtMocHelpers::SlotData<void()>(50, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'connectDeleteButton'
        QtMocHelpers::SlotData<void()>(51, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'connectEditButton'
        QtMocHelpers::SlotData<void()>(52, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'connectChooseButton'
        QtMocHelpers::SlotData<void()>(53, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'setupForTimerBools'
        QtMocHelpers::SlotData<void()>(54, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'setupHeader'
        QtMocHelpers::SlotData<void()>(55, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'setupSize'
        QtMocHelpers::SlotData<void()>(56, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'setupLayout'
        QtMocHelpers::SlotData<void()>(57, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'setTitleLabel'
        QtMocHelpers::SlotData<void(QString)>(58, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 59 },
        }}),
        // Slot 'createMainLayout'
        QtMocHelpers::SlotData<void()>(60, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<solutionItemWidget, qt_meta_tag_ZN18solutionItemWidgetE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject solutionItemWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18solutionItemWidgetE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18solutionItemWidgetE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN18solutionItemWidgetE_t>.metaTypes,
    nullptr
} };

void solutionItemWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<solutionItemWidget *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->requestDelete((*reinterpret_cast< std::add_pointer_t<solutionItemWidget*>>(_a[1]))); break;
        case 1: { int _r = _t->getIntervalTimeMinutes();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 2: { int _r = _t->getIntervalTimeHour();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 3: { QTime* _r = _t->getScheduledTime();
            if (_a[0]) *reinterpret_cast< QTime**>(_a[0]) = std::move(_r); }  break;
        case 4: { bool _r = _t->getIntervalState();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: { bool _r = _t->getScheduledState();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: { bool _r = _t->timeSetUp();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: { bool _r = _t->IsSelected();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: { bool _r = _t->isDebugSelected();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: { bool _r = _t->isCleanSelected();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: { bool _r = _t->isCleanForDebugSelected();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 11: { bool _r = _t->isCleanForReleaseSelected();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 12: { bool _r = _t->isReleaseSelected();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 13: { QString _r = _t->getSelectedPlatform();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 14: _t->platformComboboxInitiate(); break;
        case 15: { QPushButton* _r = _t->getDeleteButton();
            if (_a[0]) *reinterpret_cast< QPushButton**>(_a[0]) = std::move(_r); }  break;
        case 16: { QHBoxLayout* _r = _t->getLayoutForCheckboxes();
            if (_a[0]) *reinterpret_cast< QHBoxLayout**>(_a[0]) = std::move(_r); }  break;
        case 17: { QHBoxLayout* _r = _t->getLayoutForFileChoose();
            if (_a[0]) *reinterpret_cast< QHBoxLayout**>(_a[0]) = std::move(_r); }  break;
        case 18: { QPushButton* _r = _t->getEditButton();
            if (_a[0]) *reinterpret_cast< QPushButton**>(_a[0]) = std::move(_r); }  break;
        case 19: _t->setTitle((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 20: _t->setPath((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 21: _t->setSelected((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 22: _t->setDebug((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 23: _t->setCleaned((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 24: _t->setCleanForDebug((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 25: _t->setCleanForRelease((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 26: _t->setReleased((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 27: _t->setPlatform((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 28: _t->connectionForButtons(); break;
        case 29: _t->initiateButtons(); break;
        case 30: _t->initiateCheckBoxes(); break;
        case 31: _t->initiateFilePart(); break;
        case 32: _t->onDeleteButtonClicked(); break;
        case 33: _t->onChooseButtonClicked(); break;
        case 34: _t->onEditButtonClicked(); break;
        case 35: _t->connectDeleteButton(); break;
        case 36: _t->connectEditButton(); break;
        case 37: _t->connectChooseButton(); break;
        case 38: _t->setupForTimerBools(); break;
        case 39: _t->setupHeader(); break;
        case 40: _t->setupSize(); break;
        case 41: _t->setupLayout(); break;
        case 42: _t->setTitleLabel((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 43: _t->createMainLayout(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< solutionItemWidget* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (solutionItemWidget::*)(solutionItemWidget * )>(_a, &solutionItemWidget::requestDelete, 0))
            return;
    }
}

const QMetaObject *solutionItemWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *solutionItemWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18solutionItemWidgetE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int solutionItemWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 44)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 44;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 44)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 44;
    }
    return _id;
}

// SIGNAL 0
void solutionItemWidget::requestDelete(solutionItemWidget * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}
QT_WARNING_POP
