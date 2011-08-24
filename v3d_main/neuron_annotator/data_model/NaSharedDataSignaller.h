#ifndef NASHAREDDATASIGNALLER_H
#define NASHAREDDATASIGNALLER_H

#include <QObject>
#include <QReadWriteLock>
#include <QThread>
#include "SlotMerger.h"

// template classes like NaSharedDataModel cannot have Q_OBJECT, so create
// base class NaSharedDataSignaller .
class NaSharedDataSignaller : public QObject
{
    Q_OBJECT

public:
    NaSharedDataSignaller(); // no parent, because it has its own QThread

signals:
    void dataChanged(); // ready for downstream clients to read all data
    void progressMessage(QString msg);
    void progressAchieved(int); // on a scale of 0-100
    void progressAborted(QString msg); // data update was stopped for some reason

public slots:
    virtual void update() {} // recreate everything from upstream data

protected:
    // Optionally slow down those too-fast update() slot calls
    // like this:
    //     void MyNaSharedDataSignaller::update()
    //     {
    //         <store any local state of this call, such as if update() was passed arguments>
    //         SlotMerger updateMerger(statusOfUpdateSlot);
    //         if (! updateMerger.shouldRun()) return;
    //         <proceed with update>
    //         ...
    SlotStatus statusOfUpdateSlot;

    QReadWriteLock lock; // used for multiple-read/single-write thread-safe locking
    QThread * thread;
};


#endif // NASHAREDDATASIGNALLER_H