set(
    CPP_SOURCES
        displaycontrolplasmoidplugin.cpp
        DDCUtilHelper.cpp
        monitoritem.cpp

    ###
        ../plasmoid/contents/ui/main.qml
)

add_library(displaycontrolplasmoidplugin SHARED ${CPP_SOURCES})

install(TARGETS displaycontrolplasmoidplugin DESTINATION ${KDE_INSTALL_QMLDIR}/displaycontrolplasmoid)
install(FILES qmldir DESTINATION ${KDE_INSTALL_QMLDIR}/displaycontrolplasmoid)

target_link_libraries(
    displaycontrolplasmoidplugin
        Qt5::Core
        Qt5::Qml
)
