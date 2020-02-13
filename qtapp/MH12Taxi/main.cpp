#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "eventhandler.h"
#include "TripManager.h"

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    qmlRegisterType<EventHandler>("EventHandler", 1, 0, "EventHandler");
    //qmlRegisterType<ComboboxUpdate>("combomodel", 1, 0, "combomodel");

    QQmlApplicationEngine engine;

    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.load(url);



    return app.exec();
}
