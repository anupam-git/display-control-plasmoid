#include "DDCUtilHelper.h"

#include <QDebug>

DDCUtilHelper::DDCUtilHelper(QObject *parent) : QObject(parent) {}

void DDCUtilHelper::init() {
  qDebug() << "Application Initialized";
  emit initCompleted();
}
