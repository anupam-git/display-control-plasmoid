#ifndef MONITORITEM_H
#define MONITORITEM_H

#include <QObject>

class MonitorItem : public QObject
{
    Q_OBJECT

    private:
        QString name;
        QString i2cBusNum;

    public:
        MonitorItem(QObject *parent = nullptr);

        void setName(QString name);
        QString getName();
        void setI2cBusNum(QString i2cBusNum);
        QString getI2cBusNum();
};

#endif // MONITORITEM_H
