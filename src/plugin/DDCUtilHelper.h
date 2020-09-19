#ifndef DDCUTILHELPER_H
#define DDCUTILHELPER_H

#include <QList>
#include <QObject>

#include "monitoritem.h"

class DDCUtilHelper : public QObject {
  Q_OBJECT

 public:
  DDCUtilHelper(QObject *parent = nullptr);

 public slots:
  void getMonitorsList();

 signals:
  //  void getMonitorsListCompleted(QList<MonitorItem> monitors);
};

#endif  // DDCUTILHELPER_H
