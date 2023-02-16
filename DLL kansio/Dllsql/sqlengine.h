#ifndef SQLENGINE_H
#define SQLENGINE_H

#include <QObject>
#include <QDebug>
#include <QtSql/QtSql>
#include <QDateTime>


class sqlengine : public QObject
{
    Q_OBJECT

public:
    sqlengine();
    ~sqlengine();

    bool openConnection();
    void closeConnection();
    bool logIn (QString PINinput);
    bool logInUser (QString userInput);
    bool cardId (QString card_id);

    QString showMoney();
    void customerInfo();

    void Withdrawl20(double amount);
    void Withdrawl40(double amount);
    void Withdrawl60(double amount);
    void Withdrawl100(double amount);
    void Withdrawl200(double amount);
    void Withdrawl500(double amount);


    void Deposit20();
    void Deposit40();
    void Deposit60();
    void Deposit100();
    void Deposit200();
    void Deposit500();

    QString transactions();




private:
    sqlengine *objectdllsql;
    QSqlDatabase database;
    QString pin_code;

    struct login
    {
        int id_login;
        int card_number;
        double pin_code;
    } loginData;

    struct person
    {
        int id_person;
        QString fname;
        QString lname;
        double money;

    } personData;

    struct action
    {
        QString action_type;
        QString date;
        double amount;
    } actionData;


};

#endif // SQLENGINE_H
