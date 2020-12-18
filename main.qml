import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.12

Window {
    id: win
    visible: true
    width: 750 / 2
    height: 1334 / 2
    title: qsTr("Hello World")

    ItemDrop {

    }
/*
    Image {
        source: "resources/armour/hood.png"
        scale: 0.8
        x: -50
    }
    Image {
        source: axe.source
        y: x + 190
        x: x + 10
    }
    Image {
        source: "resources/weapons/dagger.png"
        x: x + 100
    }
    Text {
        text: axe.modifiers[0].text + " " + axe.modifiers[1].text
    }

    ColumnLayout {
        anchors.fill: parent
        anchors.margins: 10

        Rectangle {
            color: "transparent"
            border.width: 4
            border.color: "black"
            anchors.fill: parent
        }

        AnimatedSprite {
            Rectangle {
                color: "transparent"
                border.width: 4
                border.color: "black"
                anchors.fill: parent
            }

            Layout.alignment: Qt.AlignBottom
            id: chest
            source: "resources/chests/spritesheet_2.png"
            frameCount: 6
            frameWidth: 242
            frameHeight: 170
            frameDuration: 150
            interpolate: false
            running: false
            loops: 1

            MouseArea {
                width: parent.width
                height: parent.height
                onClicked: {
                    chest.start();
                }
            }
        }
    }
    */
}
