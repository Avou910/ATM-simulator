/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QGroupBox *groupBox;
    QLabel *labelInfo;
    QLCDNumber *lcdNumber;
    QLabel *labelUser;
    QLabel *labelPIN;
    QLineEdit *lineEditUser;
    QLineEdit *lineEditPIN;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *Button3;
    QPushButton *Button2;
    QPushButton *Button4;
    QPushButton *Button1;
    QPushButton *Button5;
    QPushButton *Enter;
    QPushButton *Delete;
    QPushButton *Button6;
    QPushButton *Button0;
    QPushButton *Button9;
    QPushButton *Button8;
    QPushButton *Button7;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->setEnabled(true);
        Dialog->setMaximumSize(QSize(551, 635));
        Dialog->setStyleSheet(QString::fromUtf8("background:rgb(0, 85, 127)"));
        Dialog->setSizeGripEnabled(true);
        groupBox = new QGroupBox(Dialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 90, 471, 361));
        groupBox->setStyleSheet(QString::fromUtf8("background:rgb(245, 245, 245)"));
        labelInfo = new QLabel(groupBox);
        labelInfo->setObjectName(QString::fromUtf8("labelInfo"));
        labelInfo->setGeometry(QRect(10, 20, 331, 61));
        QFont font;
        font.setPointSize(12);
        labelInfo->setFont(font);
        labelInfo->setStyleSheet(QString::fromUtf8("background:rgb(255, 170, 0)"));
        labelInfo->setFrameShape(QFrame::NoFrame);
        labelInfo->setFrameShadow(QFrame::Raised);
        lcdNumber = new QLCDNumber(groupBox);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(340, 20, 111, 61));
        lcdNumber->setStyleSheet(QString::fromUtf8("background:rgb(255, 170, 0)"));
        labelUser = new QLabel(groupBox);
        labelUser->setObjectName(QString::fromUtf8("labelUser"));
        labelUser->setGeometry(QRect(10, 80, 161, 61));
        QFont font1;
        font1.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font1.setPointSize(14);
        font1.setBold(false);
        font1.setWeight(50);
        labelUser->setFont(font1);
        labelUser->setStyleSheet(QString::fromUtf8("background:rgb(255, 170, 0)"));
        labelUser->setFrameShape(QFrame::StyledPanel);
        labelUser->setFrameShadow(QFrame::Raised);
        labelPIN = new QLabel(groupBox);
        labelPIN->setObjectName(QString::fromUtf8("labelPIN"));
        labelPIN->setGeometry(QRect(10, 140, 161, 61));
        labelPIN->setFont(font1);
        labelPIN->setStyleSheet(QString::fromUtf8("background:rgb(255, 170, 0)"));
        labelPIN->setFrameShape(QFrame::StyledPanel);
        labelPIN->setFrameShadow(QFrame::Raised);
        lineEditUser = new QLineEdit(groupBox);
        lineEditUser->setObjectName(QString::fromUtf8("lineEditUser"));
        lineEditUser->setGeometry(QRect(170, 80, 171, 61));
        QFont font2;
        font2.setPointSize(14);
        lineEditUser->setFont(font2);
        lineEditUser->setStyleSheet(QString::fromUtf8("background:rgb(245, 245, 245);\n"
""));
        lineEditUser->setEchoMode(QLineEdit::Password);
        lineEditPIN = new QLineEdit(groupBox);
        lineEditPIN->setObjectName(QString::fromUtf8("lineEditPIN"));
        lineEditPIN->setGeometry(QRect(170, 140, 171, 61));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Arial"));
        font3.setPointSize(14);
        lineEditPIN->setFont(font3);
        lineEditPIN->setStyleSheet(QString::fromUtf8("background:rgb(245, 245, 245);"));
        lineEditPIN->setEchoMode(QLineEdit::Password);
        widget = new QWidget(groupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 210, 451, 136));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        Button3 = new QPushButton(widget);
        Button3->setObjectName(QString::fromUtf8("Button3"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("MS Gothic"));
        font4.setPointSize(16);
        Button3->setFont(font4);
        Button3->setStyleSheet(QString::fromUtf8("background:rgb(255, 170, 0)"));

        gridLayout->addWidget(Button3, 0, 2, 1, 1);

        Button2 = new QPushButton(widget);
        Button2->setObjectName(QString::fromUtf8("Button2"));
        Button2->setFont(font4);
        Button2->setStyleSheet(QString::fromUtf8("background:rgb(255, 170, 0)"));

        gridLayout->addWidget(Button2, 0, 1, 1, 1);

        Button4 = new QPushButton(widget);
        Button4->setObjectName(QString::fromUtf8("Button4"));
        Button4->setFont(font4);
        Button4->setStyleSheet(QString::fromUtf8("background:rgb(255, 170, 0)"));

        gridLayout->addWidget(Button4, 2, 0, 1, 1);

        Button1 = new QPushButton(widget);
        Button1->setObjectName(QString::fromUtf8("Button1"));
        Button1->setFont(font4);
        Button1->setStyleSheet(QString::fromUtf8("background:rgb(255, 170, 0)"));

        gridLayout->addWidget(Button1, 0, 0, 1, 1);

        Button5 = new QPushButton(widget);
        Button5->setObjectName(QString::fromUtf8("Button5"));
        Button5->setFont(font4);
        Button5->setStyleSheet(QString::fromUtf8("background:rgb(255, 170, 0)"));

        gridLayout->addWidget(Button5, 2, 1, 1, 1);

        Enter = new QPushButton(widget);
        Enter->setObjectName(QString::fromUtf8("Enter"));
        Enter->setFont(font4);
        Enter->setStyleSheet(QString::fromUtf8("background:rgb(255, 170, 0)"));

        gridLayout->addWidget(Enter, 0, 3, 1, 1);

        Delete = new QPushButton(widget);
        Delete->setObjectName(QString::fromUtf8("Delete"));
        Delete->setFont(font4);
        Delete->setStyleSheet(QString::fromUtf8("background:rgb(255, 170, 0)"));

        gridLayout->addWidget(Delete, 2, 3, 1, 1);

        Button6 = new QPushButton(widget);
        Button6->setObjectName(QString::fromUtf8("Button6"));
        Button6->setFont(font4);
        Button6->setStyleSheet(QString::fromUtf8("background:rgb(255, 170, 0)"));

        gridLayout->addWidget(Button6, 2, 2, 1, 1);

        Button0 = new QPushButton(widget);
        Button0->setObjectName(QString::fromUtf8("Button0"));
        Button0->setFont(font4);
        Button0->setStyleSheet(QString::fromUtf8("background:rgb(255, 170, 0)"));

        gridLayout->addWidget(Button0, 8, 1, 1, 1);

        Button9 = new QPushButton(widget);
        Button9->setObjectName(QString::fromUtf8("Button9"));
        Button9->setFont(font4);
        Button9->setStyleSheet(QString::fromUtf8("background:rgb(255, 170, 0)"));

        gridLayout->addWidget(Button9, 3, 2, 1, 1);

        Button8 = new QPushButton(widget);
        Button8->setObjectName(QString::fromUtf8("Button8"));
        Button8->setFont(font4);
        Button8->setStyleSheet(QString::fromUtf8("background:rgb(255, 170, 0)"));

        gridLayout->addWidget(Button8, 3, 1, 1, 1);

        Button7 = new QPushButton(widget);
        Button7->setObjectName(QString::fromUtf8("Button7"));
        Button7->setFont(font4);
        Button7->setStyleSheet(QString::fromUtf8("background:rgb(255, 170, 0)"));

        gridLayout->addWidget(Button7, 3, 0, 1, 1);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        groupBox->setTitle(QString());
        labelInfo->setText(QCoreApplication::translate("Dialog", "<html><head/><body><p align=\"center\">Sy\303\266t\303\244 k\303\244ytt\303\244j\303\244tunnus ja PIN-koodi.</p></body></html>", nullptr));
        labelUser->setText(QCoreApplication::translate("Dialog", "<html><head/><body><p align=\"center\">K\303\244ytt\303\244j\303\244tunnus</p></body></html>", nullptr));
        labelPIN->setText(QCoreApplication::translate("Dialog", "<html><head/><body><p align=\"center\">PIN</p></body></html>", nullptr));
        Button3->setText(QCoreApplication::translate("Dialog", "3", nullptr));
        Button2->setText(QCoreApplication::translate("Dialog", "2", nullptr));
        Button4->setText(QCoreApplication::translate("Dialog", "4", nullptr));
        Button1->setText(QCoreApplication::translate("Dialog", "1", nullptr));
        Button5->setText(QCoreApplication::translate("Dialog", "5", nullptr));
        Enter->setText(QCoreApplication::translate("Dialog", "ENTER", nullptr));
        Delete->setText(QCoreApplication::translate("Dialog", "DELETE", nullptr));
        Button6->setText(QCoreApplication::translate("Dialog", "6", nullptr));
        Button0->setText(QCoreApplication::translate("Dialog", "0", nullptr));
        Button9->setText(QCoreApplication::translate("Dialog", "9", nullptr));
        Button8->setText(QCoreApplication::translate("Dialog", "8", nullptr));
        Button7->setText(QCoreApplication::translate("Dialog", "7", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
