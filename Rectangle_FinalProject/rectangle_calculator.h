#ifndef RECTANGLE_CALCULATOR_H
#define RECTANGLE_CALCULATOR_H

#include <QMainWindow>
#include <QGraphicsView>


QT_BEGIN_NAMESPACE
namespace Ui {
class rectangle_calculator;
}
QT_END_NAMESPACE

struct CalculatorState
{
    QString areaLength;
    QString areaWidth;
    QString perimeterLength;
    QString perimeterWidth;
    QString lengthWidth;
    QString lengthPerimeter;
};

class rectangle_calculator : public QMainWindow
{
    Q_OBJECT

public:
    rectangle_calculator(QWidget *parent = nullptr);
    ~rectangle_calculator();

private slots:
    void on_actionOpen_triggered();

    void on_actionNew_triggered();

    void on_actionSave_triggered();

    void on_actionPrint_triggered();

    void on_actionClose_triggered();

    void on_actionExit_triggered();

    void on_actionCopy_triggered();

    void on_actionPaste_triggered();

    void on_actionCut_triggered();

    void on_actionRedo_triggered();

    void on_actionUndo_triggered();

    void on_actionShow_Toolbar_triggered();

    void on_actionHide_Toolbar_triggered();

    void on_actionAbout_triggered();


    void on_math_functions_currentIndexChanged(int index);

    void on_area_solve_button_clicked();

    void on_area_clear_button_clicked();

    void on_perimeter_solve_button_clicked();

    void on_perimeter_clear_button_clicked();

    void on_length_solve_button_clicked();

    void on_length_clear_button_clicked();


    void paintEvent(QPaintEvent *e);

    void highlightLengthLine(QGraphicsView *view);

    void highlightWidthLine(QGraphicsView *view);

    void highlightPerimeterLine(QGraphicsView *view);

    void highlightArea(QGraphicsView *view);

private:
    Ui::rectangle_calculator *ui;
};
#endif // RECTANGLE_CALCULATOR_H
