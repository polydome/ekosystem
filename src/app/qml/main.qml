import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.12

import com.polydome.ekosystem 1.0

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    Frame {
        anchors.centerIn: parent

        GridView {
            implicitHeight: 500
            implicitWidth: 500
            anchors.fill: parent
            clip: true
            cellWidth: implicitHeight / 10
            cellHeight: cellWidth


            model: SpaceGridModel {
                presenter: spaceGridPresenter
            }
            delegate:
                Rectangle {
                    width: 50;
                    height: width;
                    color: (model.selected) ? "red" : "blue"

                    Text {
                        color: "white"
                        anchors.centerIn: parent
                        font.pixelSize: 14
                        text: model.number
                    }

                    MouseArea {
                        anchors.fill: parent
                        onClicked: spaceGridPresenter.selectTile(index)
                    }
                }
        }
    }


}