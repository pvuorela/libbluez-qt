/****************************************************************************
** Meta object code from reading C++ file 'bluedevice.h'
**
** Created: Wed May 25 10:17:40 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "bluedevice.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bluedevice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_OrgBluezDeviceInterface[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      25,   24,   24,   24, 0x05,
      55,   47,   24,   24, 0x05,

 // slots: signature, parameters, type, tag, flags
     113,   24,   93,   24, 0x0a,
     131,   24,   93,   24, 0x0a,
     181,  177,  144,   24, 0x0a,
     238,   24,  207,   24, 0x0a,
     254,   47,   93,   24, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_OrgBluezDeviceInterface[] = {
    "OrgBluezDeviceInterface\0\0DisconnectRequested()\0"
    "in0,in1\0PropertyChanged(QString,QDBusVariant)\0"
    "QDBusPendingReply<>\0CancelDiscovery()\0"
    "Disconnect()\0QDBusPendingReply<UIntStringMap>\0"
    "in0\0DiscoverServices(QString)\0"
    "QDBusPendingReply<QVariantMap>\0"
    "GetProperties()\0SetProperty(QString,QDBusVariant)\0"
};

const QMetaObject OrgBluezDeviceInterface::staticMetaObject = {
    { &QDBusAbstractInterface::staticMetaObject, qt_meta_stringdata_OrgBluezDeviceInterface,
      qt_meta_data_OrgBluezDeviceInterface, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &OrgBluezDeviceInterface::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *OrgBluezDeviceInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *OrgBluezDeviceInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OrgBluezDeviceInterface))
        return static_cast<void*>(const_cast< OrgBluezDeviceInterface*>(this));
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int OrgBluezDeviceInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: DisconnectRequested(); break;
        case 1: PropertyChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QDBusVariant(*)>(_a[2]))); break;
        case 2: { QDBusPendingReply<> _r = CancelDiscovery();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 3: { QDBusPendingReply<> _r = Disconnect();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 4: { QDBusPendingReply<UIntStringMap> _r = DiscoverServices((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<UIntStringMap>*>(_a[0]) = _r; }  break;
        case 5: { QDBusPendingReply<QVariantMap> _r = GetProperties();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QVariantMap>*>(_a[0]) = _r; }  break;
        case 6: { QDBusPendingReply<> _r = SetProperty((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QDBusVariant(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        default: ;
        }
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void OrgBluezDeviceInterface::DisconnectRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void OrgBluezDeviceInterface::PropertyChanged(const QString & _t1, const QDBusVariant & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
