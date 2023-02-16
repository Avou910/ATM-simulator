#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QTimer>
#include <QDebug>
#include <QMainWindow>
#include "dllpincode.h"
#include "dllsql.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();



private slots:
    void on_pushButtonLogin_clicked();

    void checkPIN(QString checkedPIN);
    void checkloginId(QString checkedloginId);





    void on_pushButtonTili_clicked();
    void on_pushButtonTapah_clicked();
    void on_pushButtonSulje_clicked();
    void on_pushButtonLogout_clicked();

    void on_pushButtonNosto20_clicked();
    void on_pushButtonNosto40_clicked();
    void on_pushButtonNosto60_clicked();
    void on_pushButtonNosto100_clicked();
    void on_pushButtonNosto200_clicked();
    void on_pushButtonNosto500_clicked();

    void on_pushButtonTalletus20_clicked();
    void on_pushButtonTalletus40_clicked();
    void on_pushButtonTalletus60_clicked();
    void on_pushButtonTalletus100_clicked();
    void on_pushButtonTalletus200_clicked();
    void on_pushButtonTalletus500_clicked();



private:
    Ui::MainWindow *ui;

    bool loggedIn;
    QString pincode;
    QString loginId;

    Dllpincode *objectdllpincode;
    Dllsql *objectdllsql;


};
#endif // MAINWINDOW_H
