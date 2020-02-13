import QtQuick 2.12
import QtQuick.Controls 2.5

Page {
    width: 600
    height: 400
    property alias button: button

    header: Label {
        text: qsTr("Login")
        font.pixelSize: Qt.application.font.pixelSize * 2
        padding: 10
    }

    Button {
        id: button
        x: 384
        y: 241
        text: qsTr("Sign-in")
    }

    Button {
        id: button1
        x: 278
        y: 241
        text: qsTr("Register")
    }

    TextField {
        id: userName
        x: 278
        y: 102
        text: qsTr("")
        placeholderText: "user@taxi.com"
    }

    TextField {
        id: password
        x: 278
        y: 157
        placeholderText: "password"
    }

    MouseArea {
        id: mouseArea
        x: 236
        y: 98
        width: 100
        height: 100
    }
}
