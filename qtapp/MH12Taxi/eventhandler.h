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

/*
class ComboboxUpdate:public  QObject
{
    Q_OBJECT
    Q_PROPERTY(QList<QObject*> comboList READ comboList)

public:

    ComboboxUpdate(QObject *parent = 0);


    const QList<QObject*> comboList();
    void setComboList( const QList<QObject*> &comboList);
};
*/
