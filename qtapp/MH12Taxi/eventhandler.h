#ifndef EVENTHANDLER_H
#define EVENTHANDLER_H

#include <QObject>

class EventHandler : public QObject
{
    Q_OBJECT
public:
    explicit EventHandler(QObject *parent = nullptr);

    Q_INVOKABLE void loginClicked(QString txt);
    Q_INVOKABLE void searchCabs(QString pickup, QString drop);

signals:

};

#endif // EVENTHANDLER_H
