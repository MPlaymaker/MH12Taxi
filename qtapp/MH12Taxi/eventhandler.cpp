#include "eventhandler.h"
#include <QDebug>

EventHandler::EventHandler(QObject *parent) : QObject(parent)
{

}

void EventHandler::loginClicked(QString txt)
{
    qDebug() << "Login Clicked" << txt;
}
