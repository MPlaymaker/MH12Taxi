import QtQuick 2.12
import QtQuick.Controls 2.5
import EventHandler 1.0

ApplicationWindow {
    visible: true
    width: 640
    height: 480
    title: qsTr("MH12Taxi")

    EventHandler {
        id: eventhandler
    }

    SwipeView {
        id: swipeView
        anchors.fill: parent
        currentIndex: tabBar.currentIndex

        Page1Form {
            button.onClicked: {
                eventhandler.loginClicked(qsTr("Login"))
                swipeView.incrementCurrentIndex()
            }
        }

        Page2Form {
            button1.onClicked: {
                swipeView.incrementCurrentIndex()
            }
        }

        Page3Form {

        }
    }

    footer: TabBar {
        id: tabBar
        currentIndex: swipeView.currentIndex

    }
}
