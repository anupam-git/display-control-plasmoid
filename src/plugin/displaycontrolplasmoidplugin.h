#ifndef DISPLAYCONTROLPLASMOID_H
#define DISPLAYCONTROLPLASMOID_H

#include <QQmlExtensionPlugin>

class DisplayControlPlasmoidPlugin : public QQmlExtensionPlugin {
  Q_OBJECT
  Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QQmlExtensionInterface")

 public:
  void registerTypes(const char *uri) override;
};

#endif  // DISPLAYCONTROLPLASMOID_H
