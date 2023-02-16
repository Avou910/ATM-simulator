#ifndef DLLPINCODE_H
#define DLLPINCODE_H

#include "dllpincode_global.h"
#include "dialog.h"
#include <QDesktopWidget>
#include <QWidget>

class DLLPINCODESHARED_EXPORT Dllpincode : public QWidget
{
    Q_OBJECT

public:
    Dllpincode();
    ~Dllpincode();
    void interfaceFunctionControlEngine();// Avaa pinkoodi dialogin.

    void interfaceFunctionClose(); // Sulkee pinkoodi dialogin

    void interfaceFunctionSetLabel(QString newLabel); // Tekstin syöttö labeliin.

private:
    Dialog *objectDialog;
    QDesktopWidget *objectDesk;


private slots:
    void receivePIN(QString);
    void receiveloginId(QString);


signals:
    void returnPIN(QString);
    void returnloginId(QString);



};

#endif // DLLPINCODE_H
