#ifndef DIALOG_H
#define DIALOG_H

#include <QApplication>
#include <QDialog>
#include <QString>
#include <QTimer>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
     Dialog(QWidget *parent = 0);
    ~Dialog();

    void pauseTimer();
    void setLabel(QString);
    void Timer();



private slots:


    void on_Button1_clicked();

    void on_Button2_clicked();

    void on_Button3_clicked();

    void on_Button4_clicked();

    void on_Button5_clicked();

    void on_Button6_clicked();

    void on_Button7_clicked();

    void on_Button8_clicked();

    void on_Button9_clicked();

    void on_Button0_clicked();

    void on_Enter_clicked();

    void on_Delete_clicked();

    void updateTime();



private:
    short time;
    QTimer *timer;
    QString pincode;
    Ui::Dialog *ui;
    QString loginId;

signals:
    void sendPIN(QString);
    void sendloginId(QString);
};

#endif // DIALOG_H
