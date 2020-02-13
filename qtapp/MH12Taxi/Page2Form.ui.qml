import QtQuick 2.12
import QtQuick.Controls 2.5

Page {
    width: 600
    height: 400
    property alias button: button
    property alias button1: button1
    property alias pickupLoc: pickupLoc
    property alias dropLoc: dropLoc

    header: Label {
        text: qsTr("Book a Cab")
        font.pixelSize: Qt.application.font.pixelSize * 2
        padding: 10
    }

    TextField {
        id: pickupLoc
        x: 161
        y: 27
        placeholderText: "pickup location"
    }

    TextField {
        id: dropLoc
        x: 161
        y: 73
        placeholderText: "drop location"
    }

    Text {
        id: element
        x: 76
        y: 40
        text: qsTr("Pickup location")
        font.pixelSize: 12
    }

    Text {
        id: element1
        x: 85
        y: 86
        text: qsTr("Drop location")
        font.pixelSize: 12
    }

    Button {
        id: button
        x: 261
        y: 133
        text: qsTr("Search")
    }

    ComboBox {
        id: comboBox
        x: 161
        y: 224
        width: 200
        height: 40
        editable: false
    }

    Text {
        id: element2
        x: 100
        y: 237
        text: qsTr("Select Cab")
        font.pixelSize: 12
    }

    Button {
        id: button1
        x: 261
        y: 284
        text: qsTr("Proceed")
    }

    Image {
        id: image
        x: 382
        y: 27
        width: 201
        height: 297
        fillMode: Image.PreserveAspectFit
        source: "map.png"
    }
}
