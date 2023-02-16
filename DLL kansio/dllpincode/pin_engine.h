#ifndef PIN_ENGINE_H
#define PIN_ENGINE_H

#include <QApplication>
#include <QDialog>
#include <QString>
#include <QLabel>

namespace Ui {
class Dialog;
}

class pin_engine : public QDialog
{
    Q_OBJECT

public:
    pin_engine(QWidget * parent = 0);
    ~pin_engine();

    void setLabel(QString);


private slots:



private:
    QString pincode;
    Ui::Dialog*ui;

signals:
    void sendPIN(QString);

};

#endif // PIN_ENGINE_H
