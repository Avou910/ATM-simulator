#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    objectdllpincode = new Dllpincode;
    objectdllsql = new Dllsql;





    QObject::connect(objectdllpincode, &Dllpincode::returnPIN, this, &MainWindow::checkPIN);
    QObject::connect(objectdllpincode, &Dllpincode::returnloginId, this, &MainWindow::checkloginId);

}

MainWindow::~MainWindow()
{
    delete ui;
    delete objectdllpincode;
    delete objectdllsql;


}


void MainWindow::on_pushButtonLogin_clicked()
{
   objectdllsql->interfaceOpenConnection(),
   objectdllpincode->interfaceFunctionControlEngine();

}

void MainWindow::checkloginId(QString checkedloginId)
{
    bool result = objectdllsql->interfaceLogInUser(checkedloginId);

    if (result)
    {


        objectdllpincode->interfaceFunctionClose();

    }

    else{
            objectdllpincode->interfaceFunctionSetLabel("Käyttäjätunnus tai salasana on virheellinen");
    }

}



void MainWindow::checkPIN(QString checkedPIN)

{

    bool result = objectdllsql->interfaceLogIn(checkedPIN);

    if (result)
    {
        objectdllpincode->interfaceFunctionSetLabel("PIN OIKEIN");


        objectdllpincode->interfaceFunctionClose();

    }

    else{
        objectdllpincode->interfaceFunctionSetLabel("Käyttäjätunnus tai salasana on virheellinen");
    }

}




void MainWindow::on_pushButtonTili_clicked()
{
    QString returnString = objectdllsql->interfaceShowMoney();
    QStringList moneyList = returnString.split("|");
    ui->labelSaldo->setText(" Asiakas: " + moneyList[0] + " " + moneyList[1] + "\n Saldo: " + moneyList[2] + "€ ");

}

void MainWindow::on_pushButtonTapah_clicked()
{
    QString actionString = objectdllsql->interfaceTransactions();
    QStringList actionList = actionString.split("|");
    ui->labelTapah->setText(" 1. " + actionList[0] + "€  " + actionList[1] + "  " +actionList[2]
                            +"\n 2. " + actionList[3] + "€  " + actionList[4] + "  " +actionList[5]
                            +"\n 3. " + actionList[6] + "€  " + actionList[7] + "  " +actionList[8]
                            +"\n 4. " + actionList[9] + "€  " + actionList[10] + "  " +actionList[11]
                            +"\n 5. " + actionList[12] + "€  " + actionList[13] + "  " +actionList[14]
                            +"\n 6. " + actionList[15] + "€  " + actionList[16] + "  " +actionList[17]
                            +"\n 7. " + actionList[18] + "€  " + actionList[19] + "  " +actionList[20]
                            +"\n 8. " + actionList[21] + "€  " + actionList[22] + "  " +actionList[23]
                            +"\n 9. " + actionList[24] + "€  " + actionList[25] + "  " +actionList[26]
                            +"\n 10. " + actionList[27] + "€  " + actionList[28] + "  " +actionList[29]
                            +"\n 11. " + actionList[30] + "€  " + actionList[31] + "  " +actionList[32]
                            +"\n 12. " + actionList[33] + "€  " + actionList[34] + "  " +actionList[35]
                            +"\n 13. " + actionList[36] + "€  " + actionList[37] + "  " +actionList[38]
                            +"\n 14. " + actionList[39] + "€  " + actionList[40] + "  " +actionList[41]
                            +"\n 15. " + actionList[42] + "€  " + actionList[43] + "  " +actionList[44]);
}


void MainWindow::on_pushButtonNosto20_clicked()
{


    objectdllsql->interfaceWithdrawl20(0);
    ui->labelNosto->setText("  Nosto hyväksytty. Noston määrä 20€.");

}

void MainWindow::on_pushButtonNosto40_clicked()
{


    objectdllsql->interfaceWithdrawl40(0);
    ui->labelNosto->setText("  Nosto hyväksytty. Noston määrä 40€.");

}

void MainWindow::on_pushButtonNosto60_clicked()
{


    objectdllsql->interfaceWithdrawl60(0);
    ui->labelNosto->setText("  Nosto hyväksytty. Noston määrä 60€.");
}

void MainWindow::on_pushButtonNosto100_clicked()
{
    objectdllsql->interfaceWithdrawl100(0);
    ui->labelNosto->setText("  Nosto hyväksytty. Noston määrä 100€.");
}

void MainWindow::on_pushButtonNosto200_clicked()
{
    objectdllsql->interfaceWithdrawl200(0);
    ui->labelNosto->setText("  Nosto hyväksytty. Noston määrä 200€.");
}

void MainWindow::on_pushButtonNosto500_clicked()
{
    objectdllsql->interfaceWithdrawl500(0);
    ui->labelNosto->setText("  Nosto hyväksytty. Noston määrä 500€.");
}






void MainWindow::on_pushButtonTalletus20_clicked()
{


    objectdllsql->interfaceDeposit20();
    ui->labelTalletus->setText("  Talletus hyväksytty. Talletuksen määrä 20€");
}

void MainWindow::on_pushButtonTalletus40_clicked()
{

    objectdllsql->interfaceDeposit40();
    ui->labelTalletus->setText("  Talletus hyväksytty. Talletuksen määrä 40€");
}

void MainWindow::on_pushButtonTalletus60_clicked()
{


    objectdllsql->interfaceDeposit60();
    ui->labelTalletus->setText("  Talletus hyväksytty. Talletuksen määrä 60€");

}

void MainWindow::on_pushButtonTalletus100_clicked()
{
    objectdllsql->interfaceDeposit100();
    ui->labelTalletus->setText("  Talletus hyväksytty. Talletuksen määrä 100€");
}

void MainWindow::on_pushButtonTalletus200_clicked()
{
    objectdllsql->interfaceDeposit200();
    ui->labelTalletus->setText("  Talletus hyväksytty. Talletuksen määrä 200€");
}

void MainWindow::on_pushButtonTalletus500_clicked()
{
    objectdllsql->interfaceDeposit500();
    ui->labelTalletus->setText("  Talletus hyväksytty. Talletuksen määrä 500€");
}

void MainWindow::on_pushButtonSulje_clicked()
{
    close();
}

void MainWindow::on_pushButtonLogout_clicked()
{
    objectdllsql->interfaceLogOut();
    ui->labelNosto->clear();
    ui->labelSaldo->clear();
    ui->labelTapah->clear();
    ui->labelTalletus->clear();
}
