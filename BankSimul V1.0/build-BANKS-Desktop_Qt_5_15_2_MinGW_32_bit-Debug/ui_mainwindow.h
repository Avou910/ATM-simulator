/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QTabWidget *tabWidget;
    QWidget *tab_4;
    QPushButton *pushButtonLogin;
    QPushButton *pushButtonSulje;
    QLabel *label_2;
    QPushButton *pushButtonLogout;
    QWidget *tab;
    QPushButton *pushButtonTili;
    QLabel *labelSaldo;
    QPushButton *pushButtonTapah;
    QLabel *labelTapah;
    QWidget *tab_2;
    QPushButton *pushButtonNosto20;
    QLabel *labelNosto;
    QPushButton *pushButtonNosto40;
    QPushButton *pushButtonNosto60;
    QPushButton *pushButtonNosto500;
    QPushButton *pushButtonNosto200;
    QPushButton *pushButtonNosto100;
    QWidget *tab_3;
    QPushButton *pushButtonTalletus20;
    QPushButton *pushButtonTalletus40;
    QPushButton *pushButtonTalletus60;
    QLabel *labelTalletus;
    QPushButton *pushButtonTalletus500;
    QPushButton *pushButtonTalletus200;
    QPushButton *pushButtonTalletus100;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("background:rgb(0, 85, 127)"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(400, 70, 141, 71));
        QFont font;
        font.setFamily(QString::fromUtf8("Copperplate Gothic Bold"));
        font.setPointSize(28);
        font.setUnderline(false);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("background:rgb(0, 85, 127)\n"
"font color white;"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(60, 110, 481, 371));
        QFont font1;
        font1.setPointSize(10);
        tabWidget->setFont(font1);
        tabWidget->setStyleSheet(QString::fromUtf8("background:rgb(245, 245, 245)"));
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        pushButtonLogin = new QPushButton(tab_4);
        pushButtonLogin->setObjectName(QString::fromUtf8("pushButtonLogin"));
        pushButtonLogin->setGeometry(QRect(0, 10, 151, 81));
        QFont font2;
        font2.setPointSize(12);
        pushButtonLogin->setFont(font2);
        pushButtonLogin->setStyleSheet(QString::fromUtf8("background:rgb(255, 170, 0)"));
        pushButtonSulje = new QPushButton(tab_4);
        pushButtonSulje->setObjectName(QString::fromUtf8("pushButtonSulje"));
        pushButtonSulje->setGeometry(QRect(0, 170, 151, 81));
        pushButtonSulje->setFont(font2);
        pushButtonSulje->setStyleSheet(QString::fromUtf8("background:rgb(255, 170, 0)"));
        label_2 = new QLabel(tab_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(160, 10, 311, 171));
        QFont font3;
        font3.setPointSize(14);
        font3.setUnderline(false);
        label_2->setFont(font3);
        label_2->setStyleSheet(QString::fromUtf8("background:rgb(255, 170, 0)"));
        label_2->setFrameShape(QFrame::StyledPanel);
        label_2->setFrameShadow(QFrame::Raised);
        pushButtonLogout = new QPushButton(tab_4);
        pushButtonLogout->setObjectName(QString::fromUtf8("pushButtonLogout"));
        pushButtonLogout->setGeometry(QRect(0, 90, 151, 81));
        pushButtonLogout->setFont(font2);
        pushButtonLogout->setStyleSheet(QString::fromUtf8("background:rgb(255, 170, 0)"));
        tabWidget->addTab(tab_4, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        pushButtonTili = new QPushButton(tab);
        pushButtonTili->setObjectName(QString::fromUtf8("pushButtonTili"));
        pushButtonTili->setGeometry(QRect(0, 0, 91, 81));
        pushButtonTili->setFont(font2);
        pushButtonTili->setStyleSheet(QString::fromUtf8("background:rgb(255, 170, 0)"));
        labelSaldo = new QLabel(tab);
        labelSaldo->setObjectName(QString::fromUtf8("labelSaldo"));
        labelSaldo->setGeometry(QRect(100, 0, 361, 81));
        QFont font4;
        font4.setPointSize(14);
        labelSaldo->setFont(font4);
        labelSaldo->setStyleSheet(QString::fromUtf8("background:rgb(245, 245, 245)"));
        labelSaldo->setFrameShape(QFrame::StyledPanel);
        labelSaldo->setFrameShadow(QFrame::Raised);
        pushButtonTapah = new QPushButton(tab);
        pushButtonTapah->setObjectName(QString::fromUtf8("pushButtonTapah"));
        pushButtonTapah->setGeometry(QRect(0, 80, 91, 91));
        pushButtonTapah->setFont(font2);
        pushButtonTapah->setStyleSheet(QString::fromUtf8("background:rgb(255, 170, 0)"));
        labelTapah = new QLabel(tab);
        labelTapah->setObjectName(QString::fromUtf8("labelTapah"));
        labelTapah->setGeometry(QRect(100, 80, 361, 261));
        labelTapah->setFont(font1);
        labelTapah->setStyleSheet(QString::fromUtf8("background:rgb(245, 245, 245)"));
        labelTapah->setFrameShape(QFrame::StyledPanel);
        labelTapah->setFrameShadow(QFrame::Raised);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        pushButtonNosto20 = new QPushButton(tab_2);
        pushButtonNosto20->setObjectName(QString::fromUtf8("pushButtonNosto20"));
        pushButtonNosto20->setGeometry(QRect(0, 10, 101, 51));
        pushButtonNosto20->setFont(font4);
        pushButtonNosto20->setStyleSheet(QString::fromUtf8("background:rgb(255, 170, 0)"));
        labelNosto = new QLabel(tab_2);
        labelNosto->setObjectName(QString::fromUtf8("labelNosto"));
        labelNosto->setGeometry(QRect(100, 10, 371, 71));
        labelNosto->setFont(font2);
        labelNosto->setFrameShape(QFrame::StyledPanel);
        labelNosto->setFrameShadow(QFrame::Raised);
        pushButtonNosto40 = new QPushButton(tab_2);
        pushButtonNosto40->setObjectName(QString::fromUtf8("pushButtonNosto40"));
        pushButtonNosto40->setGeometry(QRect(0, 60, 101, 51));
        pushButtonNosto40->setFont(font4);
        pushButtonNosto40->setStyleSheet(QString::fromUtf8("background:rgb(255, 170, 0)"));
        pushButtonNosto60 = new QPushButton(tab_2);
        pushButtonNosto60->setObjectName(QString::fromUtf8("pushButtonNosto60"));
        pushButtonNosto60->setGeometry(QRect(0, 110, 101, 51));
        pushButtonNosto60->setFont(font4);
        pushButtonNosto60->setStyleSheet(QString::fromUtf8("background:rgb(255, 170, 0)"));
        pushButtonNosto500 = new QPushButton(tab_2);
        pushButtonNosto500->setObjectName(QString::fromUtf8("pushButtonNosto500"));
        pushButtonNosto500->setGeometry(QRect(0, 260, 101, 51));
        pushButtonNosto500->setFont(font4);
        pushButtonNosto500->setStyleSheet(QString::fromUtf8("background:rgb(255, 170, 0)"));
        pushButtonNosto200 = new QPushButton(tab_2);
        pushButtonNosto200->setObjectName(QString::fromUtf8("pushButtonNosto200"));
        pushButtonNosto200->setGeometry(QRect(0, 210, 101, 51));
        pushButtonNosto200->setFont(font4);
        pushButtonNosto200->setStyleSheet(QString::fromUtf8("background:rgb(255, 170, 0)"));
        pushButtonNosto100 = new QPushButton(tab_2);
        pushButtonNosto100->setObjectName(QString::fromUtf8("pushButtonNosto100"));
        pushButtonNosto100->setGeometry(QRect(0, 160, 101, 51));
        pushButtonNosto100->setFont(font4);
        pushButtonNosto100->setStyleSheet(QString::fromUtf8("background:rgb(255, 170, 0)"));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        pushButtonTalletus20 = new QPushButton(tab_3);
        pushButtonTalletus20->setObjectName(QString::fromUtf8("pushButtonTalletus20"));
        pushButtonTalletus20->setGeometry(QRect(0, 10, 101, 51));
        pushButtonTalletus20->setFont(font4);
        pushButtonTalletus20->setStyleSheet(QString::fromUtf8("background:rgb(255, 170, 0)"));
        pushButtonTalletus40 = new QPushButton(tab_3);
        pushButtonTalletus40->setObjectName(QString::fromUtf8("pushButtonTalletus40"));
        pushButtonTalletus40->setGeometry(QRect(0, 60, 101, 51));
        pushButtonTalletus40->setFont(font4);
        pushButtonTalletus40->setStyleSheet(QString::fromUtf8("background:rgb(255, 170, 0)"));
        pushButtonTalletus60 = new QPushButton(tab_3);
        pushButtonTalletus60->setObjectName(QString::fromUtf8("pushButtonTalletus60"));
        pushButtonTalletus60->setGeometry(QRect(0, 110, 101, 51));
        pushButtonTalletus60->setFont(font4);
        pushButtonTalletus60->setStyleSheet(QString::fromUtf8("background:rgb(255, 170, 0)"));
        labelTalletus = new QLabel(tab_3);
        labelTalletus->setObjectName(QString::fromUtf8("labelTalletus"));
        labelTalletus->setGeometry(QRect(100, 10, 371, 71));
        labelTalletus->setFont(font2);
        labelTalletus->setFrameShape(QFrame::StyledPanel);
        labelTalletus->setFrameShadow(QFrame::Raised);
        pushButtonTalletus500 = new QPushButton(tab_3);
        pushButtonTalletus500->setObjectName(QString::fromUtf8("pushButtonTalletus500"));
        pushButtonTalletus500->setGeometry(QRect(0, 260, 101, 51));
        pushButtonTalletus500->setFont(font4);
        pushButtonTalletus500->setStyleSheet(QString::fromUtf8("background:rgb(255, 170, 0)"));
        pushButtonTalletus200 = new QPushButton(tab_3);
        pushButtonTalletus200->setObjectName(QString::fromUtf8("pushButtonTalletus200"));
        pushButtonTalletus200->setGeometry(QRect(0, 210, 101, 51));
        pushButtonTalletus200->setFont(font4);
        pushButtonTalletus200->setStyleSheet(QString::fromUtf8("background:rgb(255, 170, 0)"));
        pushButtonTalletus100 = new QPushButton(tab_3);
        pushButtonTalletus100->setObjectName(QString::fromUtf8("pushButtonTalletus100"));
        pushButtonTalletus100->setGeometry(QRect(0, 160, 101, 51));
        pushButtonTalletus100->setFont(font4);
        pushButtonTalletus100->setStyleSheet(QString::fromUtf8("background:rgb(255, 170, 0)"));
        tabWidget->addTab(tab_3, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "   ATM", nullptr));
        pushButtonLogin->setText(QCoreApplication::translate("MainWindow", "Kirjaudu sis\303\244\303\244n", nullptr));
        pushButtonSulje->setText(QCoreApplication::translate("MainWindow", "Sulje", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">TERVETULOA! </p><p align=\"center\">KIRJAUDU SIS\303\204\303\204N ALOITTAAKSESI.</p></body></html>", nullptr));
        pushButtonLogout->setText(QCoreApplication::translate("MainWindow", "Kirjaudu ulos", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("MainWindow", "ATM", nullptr));
        pushButtonTili->setText(QCoreApplication::translate("MainWindow", "N\303\244yt\303\244 saldo", nullptr));
        labelSaldo->setText(QString());
        pushButtonTapah->setText(QCoreApplication::translate("MainWindow", "Tapahtumat", nullptr));
        labelTapah->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Tili", nullptr));
        pushButtonNosto20->setText(QCoreApplication::translate("MainWindow", "20\342\202\254", nullptr));
        labelNosto->setText(QString());
        pushButtonNosto40->setText(QCoreApplication::translate("MainWindow", "40\342\202\254", nullptr));
        pushButtonNosto60->setText(QCoreApplication::translate("MainWindow", "60\342\202\254", nullptr));
        pushButtonNosto500->setText(QCoreApplication::translate("MainWindow", "500\342\202\254", nullptr));
        pushButtonNosto200->setText(QCoreApplication::translate("MainWindow", "200\342\202\254", nullptr));
        pushButtonNosto100->setText(QCoreApplication::translate("MainWindow", "100\342\202\254", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Nosto", nullptr));
        pushButtonTalletus20->setText(QCoreApplication::translate("MainWindow", "20\342\202\254", nullptr));
        pushButtonTalletus40->setText(QCoreApplication::translate("MainWindow", "40\342\202\254", nullptr));
        pushButtonTalletus60->setText(QCoreApplication::translate("MainWindow", "60\342\202\254", nullptr));
        labelTalletus->setText(QString());
        pushButtonTalletus500->setText(QCoreApplication::translate("MainWindow", "500\342\202\254", nullptr));
        pushButtonTalletus200->setText(QCoreApplication::translate("MainWindow", "200\342\202\254", nullptr));
        pushButtonTalletus100->setText(QCoreApplication::translate("MainWindow", "100\342\202\254", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "Talletus", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
