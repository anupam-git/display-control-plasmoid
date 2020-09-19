#include "monitoritem.h"

MonitorItem::MonitorItem(QObject *parent) : QObject(parent) {}

void MonitorItem::setName(QString name) { this->name = name; }

QString MonitorItem::getName() { return this->name; }

void MonitorItem::setI2cBusNum(QString i2cBusNum) {
  this->i2cBusNum = i2cBusNum;
}

QString MonitorItem::getI2cBusNum() { return this->i2cBusNum; }
