#include "eventhandler.h"
#include "ILocationService.h"
#include "LocationService.h"
#include "TripManager.h"

#include "ICabSelectionService.h"
#include <QDebug>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <QStandardItemModel>

EventHandler::EventHandler(QObject *parent) : QObject(parent)
{

}

void EventHandler::loginClicked(QString txt)
{
    qDebug() << "Login Clicked" << txt;

    TripManager::GetTripManager()->createTrip();

}

void EventHandler::searchCabs(QString pickup, QString drop)
{
    qDebug() << "Pickup: " << pickup << " Drop: " << drop;

    ILocationService* pLS = new LocationService();

    Location locPickup = pLS->GetLocation(pickup.toStdString());
    Location locDrop = pLS->GetLocation(drop.toStdString());

    double dDist = pLS->CalculateDistance(locPickup, locDrop);

    Trip* trip = TripManager::GetTripManager()->GetCurrentTrip();

    trip->startlocation = locPickup;
    trip->endlocation = locDrop;

    ICabSelectionService* cabSelSrv = new PuneriCabSelectionService;
    CabTypes cabTypes = cabSelSrv->GetCabTypes();


    QStandardItemModel* m = new QStandardItemModel();

    for(std::string str : cabTypes)
    {
        QStandardItem* it = new QStandardItem();
        it->setData(QString(str.c_str()));
        m->appendRow(it);
    }

    QQmlApplicationEngine* pQmlEngine = qobject_cast<QQmlApplicationEngine*>(qmlEngine(this));
    QQmlContext c(pQmlEngine,(pQmlEngine->rootContext()->findChild<QObject*>("comboBox",Qt::FindChildrenRecursively)));
    c.setContextProperty("cbItems",m);
}
