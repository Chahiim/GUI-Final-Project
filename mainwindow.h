#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include "customlineedit.h"
#include <QPainter>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    virtual void paintEvent(QPaintEvent *event);


public slots:
    int getMensuration();
    void setMensuration(int);
    void CheckFocus(bool val); // this func will be used as a coroutine
    void HandleTextChanged(const QString &text);

private slots:

    // void on_pushButton_clicked();

    // void on_pushButton_2_clicked();

    // void on_area_clicked();

    // void on_perimeter_clicked();

    // void on_length_clicked();

    // void on_displayShape_clicked();

    void on_comboBox_currentIndexChanged(int index);

private:
    int mensuration;
    Ui::MainWindow *ui;

    // double data1,data2;

    void Area(double,double);
    void Perimeter(double,double);
    void Length(double,double);
    void Calculation(double,double);
    void clearInputs();
    void symbolValues();


    //paint shape
    void paintShape();

};
#endif // MAINWINDOW_H
