#ifndef DDCUTILHELPER_H
#define DDCUTILHELPER_H

#include <QObject>

class DDCUtilHelper : public QObject {
    Q_OBJECT

    public:
        DDCUtilHelper(QObject *parent = nullptr);

    public slots:
        void init();
};

#endif //DDCUTILHELPER_H
