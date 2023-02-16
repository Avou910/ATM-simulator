#include "dllpincode.h"
#include <QDesktopWidget>

Dllpincode::Dllpincode()
{
    objectDesk = new QDesktopWidget;
    objectDialog = new Dialog;
    QObject::connect(objectDialog, &Dialog::sendPIN, this, &Dllpincode::receivePIN);
    QObject::connect(objectDialog, &Dialog::sendloginId, this, &Dllpincode::receiveloginId);


}

Dllpincode::~Dllpincode()
{
    delete objectDialog;
    delete objectDesk;
    objectDialog = NULL;
    objectDesk = NULL;
}

void Dllpincode::interfaceFunctionControlEngine()
{
    objectDialog->Timer();
    objectDialog->setGeometry(objectDesk->screenGeometry(0));
    objectDialog->show();
    objectDialog->exec();
}

void Dllpincode::interfaceFunctionClose()
{
    objectDialog->close();
}

void Dllpincode::interfaceFunctionSetLabel(QString newLabel)
{
    objectDialog->setLabel(newLabel);
}

void Dllpincode::receivePIN(QString receivedPIN) //
{
    emit returnPIN(receivedPIN);
}

void Dllpincode::receiveloginId(QString receivedloginId)
{
    emit returnloginId(receivedloginId);
}
