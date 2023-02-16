#include "sqlengine.h"
#include <QDebug>

sqlengine::sqlengine()
{

}

sqlengine::~sqlengine()
{
    delete objectdllsql;


}

bool sqlengine::openConnection()
{
    database = QSqlDatabase::addDatabase("QMYSQL", "bankdb"); // Avaa yhteyden tietokantaan mikäli ei onnistu tulostaa "yhteys ei toimi"
    database.setHostName("localhost");
    database.setDatabaseName("bankdb");
    database.setUserName("root");
    database.setPassword("Novelle09");
    database.open();
        if (!database.open())
        {
            qDebug() << "Yhteys ei toimi";
            return false;
        }
    return true;
}

bool sqlengine::logInUser(QString userInput)
{
    QSqlQuery query(database);
    query.prepare("SELECT id_login FROM login WHERE id_login = "+userInput+" ");

       query.addBindValue(userInput);
       query.exec();

       while(query.next())

           {

           this->loginData.id_login=query.value(0). toInt();
           this->loginData.pin_code=query.value(0). toInt();
           }
               QString userString = QString::number(loginData.id_login);


            if (userInput != userString)

                {return false;}

            QSqlQuery accountQuery(database);
            accountQuery.prepare("SELECT id_person FROM person WHERE id_login = "+userInput+" ");
            accountQuery.addBindValue(this->personData.id_person);
            accountQuery.exec();

            while (accountQuery.next())
            {
                this->personData.id_person = accountQuery.value(0).toInt();
            }

            {return true;}

}


bool sqlengine::logIn(QString PINinput) // Vahvistaa salasanan tietokannasta ja palauttaa arvon. (kesken)
{   


    QSqlQuery query(database);
    query.prepare("SELECT pin_code FROM login WHERE pin_code = "+PINinput+" ");

       query.addBindValue(PINinput);
       query.exec();

       while(query.next())

           {
           this->loginData.id_login=query.value(0). toInt();
           this->loginData.pin_code=query.value(0). toInt();
           }
               QString pinString = QString::number(loginData.pin_code);


            if (PINinput != pinString)

                {return false;}

           else

            {return true;}

}

void sqlengine::closeConnection()

{
    database.close();
    database=QSqlDatabase();
    QSqlDatabase::removeDatabase("bankdb");
    qDebug()<<"yhteys suljettu";

}

void sqlengine::customerInfo()

{
    QSqlQuery query (database);
    query.prepare("SELECT * FROM person WHERE id_person = ?");
    query.addBindValue(this->personData.id_person);
    query.exec();

        while(query.next())
        {
            this->personData.fname = query.value(1).toString();
            this->personData.lname = query.value(2).toString();


        }

}

QString sqlengine::showMoney()
{

    this->customerInfo();
    QSqlQuery query(database);
    query.prepare("SELECT money FROM person WHERE id_person = ?");
    query.addBindValue(this->personData.id_person);
    query.exec();

        while(query.next())
        {
              this->personData.money = query.value(0). toDouble();
              }
              QString returnValue = personData.fname + "|" + personData.lname
              + "|" + QString::number(personData.money);
              return returnValue;


}

QString sqlengine::transactions()
{

    QSqlQuery query(database);
    query.prepare("SELECT amount,action_type,date FROM action WHERE id_person = ? ORDER BY date ASC");
    query.addBindValue(this->personData.id_person);
    query.exec();
    query.last();
    QString actionString;
    for (int i = 0; i < 50; i++)
    {
        this->actionData.amount=query.value(0).toDouble();
        this->actionData.action_type=query.value(1).toString();
        this->actionData.date=query.value(2).toString();

        actionString.append(QString::number(actionData.amount)+"|"+actionData.action_type+"|"+actionData.date+ "|");
        query.previous();
    }
        return actionString;
}





void sqlengine::Withdrawl20(double amount)
{

    this->customerInfo();

    QSqlQuery query(database);

    query.prepare("CALL money_action (?, -20)");
    query.addBindValue(this->personData.id_person);
    query.exec();

        while(query.next())
        {
            this->personData.money = query.value(0). toDouble();
        }
        if (this->personData.money < amount)
        {
            qDebug()<<"Nosto hylätty";

        }

        else
        {

        }

}
void sqlengine::Withdrawl40(double amount)
{

    this->customerInfo();

    QSqlQuery query(database);

    query.prepare("CALL money_action (?, -40)");
    query.addBindValue(this->personData.id_person);
    query.exec();

        while(query.next())
        {
            this->personData.money = query.value(0). toDouble();
        }
        if (this->personData.money < amount)
        {
            qDebug()<<"Nosto hylätty";

        }

        else
        {

        }

}
void sqlengine::Withdrawl60(double amount)
{

    this->customerInfo();

    QSqlQuery query(database);

    query.prepare("CALL money_action (?, -60)");
    query.addBindValue(this->personData.id_person);
    query.exec();

        while(query.next())
        {
            this->personData.money = query.value(0). toDouble();
        }
        if (this->personData.money < amount)
        {
            qDebug()<<"Nosto hylätty";

        }

        else
        {

        }

}
void sqlengine::Withdrawl100(double amount)
{

    this->customerInfo();

    QSqlQuery query(database);

    query.prepare("CALL money_action (?, -100)");
    query.addBindValue(this->personData.id_person);
    query.exec();

        while(query.next())
        {
            this->personData.money = query.value(0). toDouble();
        }
        if (this->personData.money < amount)
        {
            qDebug()<<"Nosto hylätty";

        }

        else
        {

        }

}
void sqlengine::Withdrawl200(double amount)
{

    this->customerInfo();

    QSqlQuery query(database);

    query.prepare("CALL money_action (?, -200)");
    query.addBindValue(this->personData.id_person);
    query.exec();

        while(query.next())
        {
            this->personData.money = query.value(0). toDouble();
        }
        if (this->personData.money < amount)
        {
            qDebug()<<"Nosto hylätty";

        }

        else
        {

        }

}
void sqlengine::Withdrawl500(double amount)
{

    this->customerInfo();

    QSqlQuery query(database);

    query.prepare("CALL money_action (?, -500)");
    query.addBindValue(this->personData.id_person);
    query.exec();

        while(query.next())
        {
            this->personData.money = query.value(0). toDouble();
        }
        if (this->personData.money < amount)
        {
            qDebug()<<"Nosto hylätty";

        }

        else
        {

        }

}
void sqlengine::Deposit20()
{

    this->customerInfo();

    QSqlQuery query(database);

    query.prepare("CALL money_action (?, 20)");
    query.addBindValue(this->personData.id_person);
    query.exec();

        while(query.next())
        {
            this->personData.money = query.value(0). toDouble();
        }

}
void sqlengine::Deposit40()
{

    this->customerInfo();

    QSqlQuery query(database);

    query.prepare("CALL money_action (?, 40)");
    query.addBindValue(this->personData.id_person);
    query.exec();

        while(query.next())
        {
            this->personData.money = query.value(0). toDouble();
        }

}
void sqlengine::Deposit60()
{

    this->customerInfo();

    QSqlQuery query(database);

    query.prepare("CALL money_action (?, 60)");
    query.addBindValue(this->personData.id_person);
    query.exec();

        while(query.next())
        {
            this->personData.money = query.value(0). toDouble();
        }

}
void sqlengine::Deposit100()
{

    this->customerInfo();

    QSqlQuery query(database);

    query.prepare("CALL money_action (?, 100)");
    query.addBindValue(this->personData.id_person);
    query.exec();

        while(query.next())
        {
            this->personData.money = query.value(0). toDouble();
        }

}
void sqlengine::Deposit200()
{

    this->customerInfo();

    QSqlQuery query(database);

    query.prepare("CALL money_action (?, 200)");
    query.addBindValue(this->personData.id_person);
    query.exec();

        while(query.next())
        {
            this->personData.money = query.value(0). toDouble();
        }

}
void sqlengine::Deposit500()
{

    this->customerInfo();

    QSqlQuery query(database);

    query.prepare("CALL money_action (?, 500)");
    query.addBindValue(this->personData.id_person);
    query.exec();

        while(query.next())
        {
            this->personData.money = query.value(0). toDouble();
        }

}


















