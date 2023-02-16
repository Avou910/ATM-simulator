#ifndef DLLSQL_H
#define DLLSQL_H

#include "sqlengine.h"
#include "Dllsql_global.h"
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QDebug>
#include <QObject>

class DLLSQLSHARED_EXPORT Dllsql : public QObject
{
    Q_OBJECT

public:
    Dllsql();
    ~Dllsql();

    bool interfaceOpenConnection(); // Avaa yhteyden tietokantaan.
    bool interfaceLogIn (QString PINinput);
    bool interfaceLogInUser(QString userInput);                                                        // Ottaa syötetyn salasanan ylös sekä,//tarkistaa sen oikeudellisuuden vertaamalla tietokantaan.(kesken)
    void interfaceLogOut(); // Sulkee yhteyden tietokantaan.

    QString interfaceShowMoney(); // Hakee tietokannasta asiakkaan saldon.

    void interfaceWithdrawl20(double amount);
    void interfaceWithdrawl40(double amount);
    void interfaceWithdrawl60(double amount);
    void interfaceWithdrawl100(double amount);
    void interfaceWithdrawl200(double amount);
    void interfaceWithdrawl500(double amount);

    void interfaceDeposit20();
    void interfaceDeposit40();
    void interfaceDeposit60();
    void interfaceDeposit100();
    void interfaceDeposit200();
    void interfaceDeposit500();


    QString interfaceTransactions();



private:
    sqlengine *objectsqlengine;



};

#endif // DLLSQL_H
