import QtQuick 2.12
import QtQuick.Controls 2.5

Page {
    width: 600
    height: 400
    property alias button2: button2

    header: Label {
        text: qsTr("Request Cab")
        font.pixelSize: Qt.application.font.pixelSize * 2
        padding: 10
    }

    Text {
        id: element
        x: 74
        y: 40
        width: 90
        height: 15
        text: qsTr("Choose payment")
        font.pixelSize: 12
    }

    Text {
        id: element1
        x: 74
        y: 146
        text: qsTr("Trip details")
        font.pixelSize: 12
    }

    Button {
        id: button
        x: 261
        y: 79
        text: qsTr("Confirm")
    }

    Button {
        id: button1
        x: 261
        y: 284
        text: qsTr("Pay")
    }

    ComboBox {
        id: comboBox1
        x: 221
        y: 28
    }

    TextArea {
        id: textArea
        x: 189
        y: 144
        width: 172
        height: 109
        placeholderText: "Cab number:\\nDriver number:\\nPickup Time:\\nDrop Time\\nTotal fare:"
    }

    Button {
        id: button2
        x: 22
        y: 284
        text: qsTr("Back")
    }
}
