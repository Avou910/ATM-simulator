#include "dllsql.h"

Dllsql::Dllsql()
{   
    objectsqlengine = new sqlengine;
}

Dllsql::~Dllsql()
{
    delete objectsqlengine;
    objectsqlengine = NULL;

}

bool Dllsql::interfaceOpenConnection()
{
    objectsqlengine->openConnection();
    return true;

}

bool Dllsql::interfaceLogInUser(QString userInput)
{
    bool loginUser = objectsqlengine-> logInUser(userInput);
    return loginUser;
}


bool Dllsql::interfaceLogIn(QString PINinput)
{
    bool login = objectsqlengine->logIn(PINinput);
    return login;

}

void Dllsql::interfaceLogOut()

{
    objectsqlengine->closeConnection();

}


QString Dllsql::interfaceShowMoney()
{
    return objectsqlengine->showMoney();
}

QString Dllsql::interfaceTransactions()
{
    return objectsqlengine->transactions();
}


void Dllsql::interfaceWithdrawl20(double amount)
{
    objectsqlengine->Withdrawl20(amount);
}

void Dllsql::interfaceWithdrawl40(double amount)
{
    objectsqlengine->Withdrawl40(amount);
}

void Dllsql::interfaceWithdrawl60(double amount)
{
    objectsqlengine->Withdrawl60(amount);
}

void Dllsql::interfaceWithdrawl100(double amount)
{
    objectsqlengine->Withdrawl100(amount);
}

void Dllsql::interfaceWithdrawl200(double amount)
{
    objectsqlengine->Withdrawl200(amount);
}

void Dllsql::interfaceWithdrawl500(double amount)
{
    objectsqlengine->Withdrawl500(amount);
}



void Dllsql::interfaceDeposit20()
{
    objectsqlengine->Deposit20();
}

void Dllsql::interfaceDeposit40()
{
    objectsqlengine->Deposit40();
}

void Dllsql::interfaceDeposit60()
{
    objectsqlengine->Deposit60();
}

void Dllsql::interfaceDeposit100()
{
    objectsqlengine->Deposit100();
}

void Dllsql::interfaceDeposit200()
{
    objectsqlengine->Deposit200();
}

void Dllsql::interfaceDeposit500()
{
    objectsqlengine->Deposit500();
}































