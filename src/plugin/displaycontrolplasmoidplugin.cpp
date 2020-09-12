#include "displaycontrolplasmoidplugin.h"

#include <QQmlEngine>

#include "DDCUtilHelper.h"

DDCUtilHelper *ddcUtil = nullptr;

void DisplayControlPlasmoidPlugin::registerTypes(const char *uri) {
  Q_ASSERT(QLatin1String(uri) == QLatin1String("displaycontrolplasmoid"));

  qDebug() << "Registering Types";

  qmlRegisterSingletonType<DDCUtilHelper>(
      uri, 1, 0, "DDCUtilHelper", [](QQmlEngine *e, QJSEngine *j) -> QObject * {
        Q_UNUSED(j)

        if (ddcUtil == nullptr) {
          ddcUtil = new DDCUtilHelper(e);
        }

        return ddcUtil;
      });
}
