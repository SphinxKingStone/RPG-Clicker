import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.12

Rectangle {
    anchors.bottom: parent.bottom
    width: parent.width
    height: parent.height * 0.35
    color: "#800000FF"


    ColumnLayout {

        width: parent.width
        height: parent.height
        spacing: 4

        RowLayout {
            Layout.preferredWidth: parent.width * 0.5
            Layout.preferredHeight: parent.height * 0.8

            Rectangle {
                Layout.preferredWidth: 200
                Layout.preferredHeight: parent.height
                color: "red"
                Image {
                    width: parent.width
                    height: parent.height
                    fillMode: Image.PreserveAspectFit
                    source: "resources/armour/leather chestplate.png"
                }
            }

            ColumnLayout {
                Text {
                    text: "+ 18 Силы"
                    font.pointSize: 10
                }
                Text {
                    text: "+ 2 - 4 Физического урона"
                    font.pointSize: 10
                }
                Text {
                    text: "+ 30 Здоровья"
                    font.pointSize: 10
                }
            }
        }

        RowLayout {
//            Layout.preferredWidth: parent.width * 0.3
//            Layout.preferredHeight: parent.height * 0.3

            Button {
                text: "sell"
                Layout.fillWidth: true
            }
            Button {
                text: "save"
                Layout.fillWidth: true
            }
        }
    }
}
