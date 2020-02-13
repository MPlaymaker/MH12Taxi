#include "eventhandler.h"
#include <QDebug>

EventHandler::EventHandler(QObject *parent) : QObject(parent)
{

}

void EventHandler::loginClicked(QString txt)
{
    qDebug() << "Login Clicked" << txt;
}

void EventHandler::searchCabs(QString pickup, QString drop)
{
    qDebug() << "Pickup: " << pickup << " Drop: " << drop;
}
