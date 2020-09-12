#ifndef DDCUTILHELPER_H
#define DDCUTILHELPER_H

#include <QObject>

class DDCUtilHelper : public QObject {
  Q_OBJECT

 public:
  DDCUtilHelper(QObject *parent = nullptr);

 public slots:
  void init();

 signals:
  void initCompleted();
};

#endif  // DDCUTILHELPER_H
