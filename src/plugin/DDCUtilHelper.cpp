#include "DDCUtilHelper.h"

#include <QDebug>
#include <QProcess>

DDCUtilHelper::DDCUtilHelper(QObject *parent) : QObject(parent) {}

void DDCUtilHelper::getMonitorsList() {
  qDebug() << "Fetching Monitors List";
  QString program = "pkexec";
  QStringList arguments;
  //  QList<MonitorItem> monitors;

  arguments << "ddcutil"
            << "detect"
            << "-t";

  QProcess *myProcess = new QProcess(this);
  myProcess->start(program, arguments);

  connect(
      myProcess, QOverload<int, QProcess::ExitStatus>::of(&QProcess::finished),
      [this, myProcess /*, monitors*/](int exitCode,
                                       QProcess::ExitStatus exitStatus) {
        Q_UNUSED(exitCode)
        Q_UNUSED(exitStatus)

        qDebug().noquote() << "Monitors:" << myProcess->readAllStandardOutput();

        // emit getMonitorsListCompleted(monitors);
      });
}
