import QtQuick 2.15
import QtQuick.Controls 2.15
import QtQuick.Layouts 1.15
import org.kde.kirigami 2.4 as Kirigami

Rectangle {
    color: "#eee"
    radius: 10
    width: 200
    height: 400

    ListModel {
        id: displayModel

        ListElement {
            index: 0
        }
        ListElement {
            index: 1
        }
        ListElement {
            index: 2
        }
    }

    ColumnLayout {
        id: rootContainer
        spacing: 10
        anchors.fill: parent

        ListView {
            id: controlsContainer
            orientation: ListView.Horizontal
            model: displayModel
            Layout.fillWidth: true
            Layout.fillHeight: true
            clip: true
            snapMode: ListView.SnapOneItem

            delegate: Item {
                id: controlsDelegate
                width: controlsContainer.width
                height: controlsContainer.height

                RowLayout {
                    anchors.centerIn: controlsDelegate

                    Slider {
                        from: 1
                        value: 25
                        to: 100
                        orientation: Qt.Vertical
                    }

                    Slider {
                        from: 1
                        value: 50
                        to: 100
                        orientation: Qt.Vertical
                    }
                }
            }

            onCurrentIndexChanged: {
                console.log(currentIndex)
            }

            onCurrentItemChanged: {
                console.log(currentItem)
            }
        }

        PageIndicator {
            Layout.alignment: Qt.AlignHCenter | Qt.AlignVCenter
            Layout.preferredHeight: 20
            Layout.maximumHeight: 20

            currentIndex: controlsContainer.currentIndex
            count: controlsContainer.count
        }

        RowLayout {
            Layout.alignment: Qt.AlignHCenter | Qt.AlignVCenter
            Layout.preferredHeight: 60
            Layout.maximumHeight: 60

            Kirigami.Icon {
                source: "computer"
                Layout.fillWidth: true
                Layout.fillHeight: true
            }

            Kirigami.Icon {
                source: "computer"
                Layout.fillWidth: true
                Layout.fillHeight: true
            }
        }
    }
}
