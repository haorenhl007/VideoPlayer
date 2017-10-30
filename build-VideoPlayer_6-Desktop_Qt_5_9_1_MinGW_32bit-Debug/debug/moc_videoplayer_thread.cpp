/****************************************************************************
** Meta object code from reading C++ file 'videoplayer_thread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/videoplayer/videoplayer_thread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'videoplayer_thread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VideoPlayer_Thread_t {
    QByteArrayData data[8];
    char stringdata0[117];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VideoPlayer_Thread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VideoPlayer_Thread_t qt_meta_stringdata_VideoPlayer_Thread = {
    {
QT_MOC_LITERAL(0, 0, 18), // "VideoPlayer_Thread"
QT_MOC_LITERAL(1, 19, 15), // "sig_GetOneFrame"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 16), // "sig_StateChanged"
QT_MOC_LITERAL(4, 53, 31), // "VideoPlayer_Thread::PlayerState"
QT_MOC_LITERAL(5, 85, 5), // "state"
QT_MOC_LITERAL(6, 91, 20), // "sig_TotalTimeChanged"
QT_MOC_LITERAL(7, 112, 4) // "uSec"

    },
    "VideoPlayer_Thread\0sig_GetOneFrame\0\0"
    "sig_StateChanged\0VideoPlayer_Thread::PlayerState\0"
    "state\0sig_TotalTimeChanged\0uSec"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VideoPlayer_Thread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       3,    1,   32,    2, 0x06 /* Public */,
       6,    1,   35,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QImage,    2,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::LongLong,    7,

       0        // eod
};

void VideoPlayer_Thread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VideoPlayer_Thread *_t = static_cast<VideoPlayer_Thread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sig_GetOneFrame((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 1: _t->sig_StateChanged((*reinterpret_cast< VideoPlayer_Thread::PlayerState(*)>(_a[1]))); break;
        case 2: _t->sig_TotalTimeChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (VideoPlayer_Thread::*_t)(QImage );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VideoPlayer_Thread::sig_GetOneFrame)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (VideoPlayer_Thread::*_t)(VideoPlayer_Thread::PlayerState );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VideoPlayer_Thread::sig_StateChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (VideoPlayer_Thread::*_t)(qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VideoPlayer_Thread::sig_TotalTimeChanged)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject VideoPlayer_Thread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_VideoPlayer_Thread.data,
      qt_meta_data_VideoPlayer_Thread,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *VideoPlayer_Thread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VideoPlayer_Thread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VideoPlayer_Thread.stringdata0))
        return static_cast<void*>(const_cast< VideoPlayer_Thread*>(this));
    return QThread::qt_metacast(_clname);
}

int VideoPlayer_Thread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void VideoPlayer_Thread::sig_GetOneFrame(QImage _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void VideoPlayer_Thread::sig_StateChanged(VideoPlayer_Thread::PlayerState _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void VideoPlayer_Thread::sig_TotalTimeChanged(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
