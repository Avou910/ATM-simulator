// Määritelty pin-näppäimiston näppäimet ja niiden toiminnot sekä ajastin ja tekstinsyöttö labeliin.


#include "dialog.h"
#include "ui_dialog.h"
#include <QFont>

Dialog::Dialog(QWidget *parent) : QDialog(parent), ui(new Ui::Dialog)
{
    ui->setupUi(this);
    timer = new QTimer(this);
    QObject::connect(timer, SIGNAL(timeout()), this, SLOT(updateTime()));
    ui->lineEditPIN->setMaxLength(4);
    ui->lineEditPIN->setReadOnly(true);
    ui->lineEditPIN->setAlignment(Qt::AlignCenter);
}

Dialog::~Dialog()
{
    delete timer;
    delete ui;
    timer = NULL;
    ui = NULL;
}


void Dialog::on_Button1_clicked()
{
    ui->lineEditPIN->setText(ui->lineEditPIN->text()+ "1");

}

void Dialog::on_Button2_clicked()
{
    ui->lineEditPIN->setText(ui->lineEditPIN->text() + "2");

}

void Dialog::on_Button3_clicked()
{
    ui->lineEditPIN->setText(ui->lineEditPIN->text() + "3");

}

void Dialog::on_Button4_clicked()
{
    ui->lineEditPIN->setText(ui->lineEditPIN->text() + "4");

}

void Dialog::on_Button5_clicked()
{
    ui->lineEditPIN->setText(ui->lineEditPIN->text() + "5");

}

void Dialog::on_Button6_clicked()
{
    ui->lineEditPIN->setText(ui->lineEditPIN->text() + "6");

}

void Dialog::on_Button7_clicked()
{
    ui->lineEditPIN->setText(ui->lineEditPIN->text() + "7");

}

void Dialog::on_Button8_clicked()
{
    ui->lineEditPIN->setText(ui->lineEditPIN->text() + "8");

}

void Dialog::on_Button9_clicked()
{
    ui->lineEditPIN->setText(ui->lineEditPIN->text() + "9");

}

void Dialog::on_Button0_clicked()
{
    ui->lineEditPIN->setText(ui->lineEditPIN->text() + "0");

}

void Dialog::on_Enter_clicked()
{

    pincode = ui->lineEditPIN->text();
    loginId = ui->lineEditUser->text();
    emit sendPIN(pincode);
    emit sendloginId(loginId);

    ui->lineEditPIN->clear();
    ui->lineEditUser->clear();
}
void Dialog::on_Delete_clicked()
{

    ui->lineEditPIN->clear();
    ui->lineEditUser->clear();
}

void Dialog::updateTime()
{
    time--;
    ui->lcdNumber->display(time);
    if (time==0)
    {
        timer->stop();
        ui->lineEditPIN->clear();
        this->close();
    }
}

void Dialog::Timer()
{
    timer->stop();
    time = 21;
    timer->setInterval(1000);
    timer->start();
    updateTime();
}

void Dialog::pauseTimer()
{
    timer->stop();
    timer->start();
    time = 11;
    updateTime();
}

void Dialog::setLabel(QString newLabel)
{
    ui->labelInfo->setText(newLabel);
}




























