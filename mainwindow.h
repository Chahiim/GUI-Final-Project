#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include "customlineedit.h"

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

public slots:
    void CheckFocus(bool val); // this func will be used as a coroutine
    void HandleTextChanged(const QString &text);

private slots:

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_area_clicked();

    void on_perimeter_clicked();

    void on_length_clicked();

    void on_displayShape_clicked();

private:
    Ui::MainWindow *ui;
    void Area();
    void Perimeter();
    void Length();
    void Calculation();

    //paint shape
    void paintShape();

};
#endif // MAINWINDOW_H
