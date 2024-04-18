//darwyne_azueta testing commit

#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QGraphicsScene>
#include <QPainter>
#include <QActionGroup>
#include <QGraphicsItemGroup>
#include <QMessageBox>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidgetArea->setCurrentIndex(0);

    connect(ui->lengthValue, &CustomLineEdit::textChanged, this, &MainWindow::HandleTextChanged);
    connect(ui->widthValue, &CustomLineEdit::textChanged, this, &MainWindow::HandleTextChanged);

}

int MainWindow::getMensuration(){
    return mensuration;
}
void MainWindow::setMensuration(int newMensuration){
    mensuration = newMensuration;
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::clearInputs(){
    ui->widthValue->setText("");
    ui->lengthValue->setText("");
    ui->LabelWorkings->setText("");
    ui->Result->setText("");
}
void MainWindow::on_comboBox_currentIndexChanged(int index){
    clearInputs();
    if(index == 0){
         ui->stackedWidgetArea->setCurrentIndex(index);
    }else{
    ui->stackedWidgetArea->setCurrentIndex(1);
    }
    setMensuration(index);
    ui->indexChange->setText(QString::number(getMensuration()));
    symbolValues();

}

void MainWindow::paintEvent(QPaintEvent *event){
    QPainter painter(this);
    ui->stackedWidgetArea->lower();
    // Set pen color and width for the border
    painter.setPen(QPen(Qt::black, 2));

    // Draw rectangle
    painter.drawRect(50, 50, 200, 100);
    // painter.drawRect(100, 50, 200, 100);


    // Set pen color and width for the diagonal line
    painter.setPen(QPen(Qt::black, 1));

    // Draw diagonal line
    painter.drawLine(50, 50, 250, 150);

    // Draw characters on the left side
    QFont font = painter.font();
    font.setPixelSize(14);
    painter.setFont(font);
    painter.drawText(45, 65, "w");
    painter.drawText(50, 150, "l");
    painter.drawText(125, 100, "d");


}

void MainWindow::symbolValues(){
    int mensuration = getMensuration();

    if (mensuration == 1) {
        ui->symbol->setText("<b>A=</b>");
        ui->LabelSolution->setText("<font color='gray'>Solution</font>");
        ui->labelVal1->setText("L length");
        ui->labelVal2->setText("W width");
    } else if (mensuration == 2) {
        ui->symbol->setText("<b>P=</b>");
        ui->LabelSolution->setText("<font color='gray'>Solution</font>");
        ui->labelVal1->setText("L length");
        ui->labelVal2->setText("W width");
    } else if (mensuration == 3) {
        ui->symbol->setText("<b>L=</b>");
        ui->LabelSolution->setText("<font color='gray'>Using the formula <br><br> <b>P=2(l+w)</b> <br><br> Solving for L</font>");
        ui->labelVal1->setText("W width");
        ui->labelVal2->setText("P perimeter");
    };
}

double data1;
double data2;

void MainWindow::Area(double length, double width) {
    if (length <= 0 || width <= 0) {
        qDebug() << "Error: Variables should be positive";
        return;
    }

    double result = length * width;
    QString workings = "A = w * l = " + QString::number(length) + " * " + QString::number(width) + " = " + QString::number(result);
    ui->LabelWorkings->setText(workings);
    qDebug() << "A = w * l = " << length << " * " << width << " = " << result;
    ui->Result->setText(QString::number(result));

}

void MainWindow::Perimeter(double length, double width) {
    if (length <= 0 || width <= 0) {
        qDebug() << "Error: Variables should be positive";
        return;
    }

    double result = (length + width) * 2;
    QString workings = "P = 2(l+w) = 2(" + QString::number(length) + " + " + QString::number(width) + ") = " + QString::number(result);
    ui->LabelWorkings->setText(workings);
    qDebug() << "P = 2(l+w) = 2(" << length << " + " << width << ") = " << result;
    ui->Result->setText(QString::number(result));
}
void MainWindow::Length(double width ,double perimeter){
    if (perimeter <= 0 || width <= 0) {
        qDebug() << "Error: Variables should be positive";
        return;
    }

    double length = (perimeter / 2) - width;
    QString workings = "L = (P/2) - w = (" + QString::number(perimeter) + "/2) - " + QString::number(width) + " = " + QString::number(length);
    ui->LabelWorkings->setText(workings);
    qDebug() << "L = (P/2) - w = (" << perimeter << "/2) - " << width << " = " << length;
    ui->Result->setText(QString::number(length));
};



void MainWindow::HandleTextChanged(const QString &val) {
    if (ui->lengthValue->hasFocus()) {
        try {
            data1 = val.toDouble();
            qDebug() << "Length value changed: " << data1;
        } catch(...) {
            qDebug() << "Error converting text to double for length";
        }
    }

    if (ui->widthValue->hasFocus()) {
        try {
            data2 = val.toDouble();
            qDebug() << "Width value changed: " << data2;
        } catch(...) {
            qDebug() << "Error converting text to double for width";
        }
    }

    Calculation(data1, data2);
}


void MainWindow::Calculation(double val1,double val2){
    switch (getMensuration()) {


    case 1:
        Area(val1,val2);
        break;

    case 2:
         Perimeter(val1,val2);
        break;

    case 3:
         Length(val1,val2);
        break;

    default:
        break;
    }
}

void MainWindow::CheckFocus(bool val){
    // if (val == false){return;}

    // if (input1->hasFocus()){
    //     //make something blue
    //     qDebug() << "input1 focused";
    // }

    // if (input2->hasFocus()){
    //     //make something blue
    //     qDebug() << "input2 focused";
    // }
};
// void MainWindow::on_pushButton_clicked()
// {
    //make self blue

    // make focus
    // input1->setFocus();

// }


// void MainWindow::on_pushButton_2_clicked()
// {
    //make self blue

    // make focus
    // input2->setFocus();
// }


// void MainWindow::on_area_clicked()
// {
    // set the area text for example
    // ui->Eqaution_symbol->setText("A =");
    // ui->pushButton_2->setText("W");
    // ui->pushButton->setText("L*");
    // ui->input1_label->setText("L      length");
    // ui->input2_label->setText("W     width");
    // // set operation
    // Operation = Operation_type::area;
    // if (data1 > 0 && data2 > 0){Calculation(); return;}
// }


// void MainWindow::on_perimeter_clicked()
// {
    // set the area text for example
    // ui->Eqaution_symbol->setText("P = 2");
    // ui->pushButton_2->setText("W)");
    // ui->pushButton->setText("(L+");
    // ui->input1_label->setText("L     length");
    // ui->input2_label->setText("W   width");
    // // set operation
    // Operation = Operation_type::perimeter;
    // if (data1 > 0 && data2 > 0){ ui->Eqaution_symbol->setText("P = "); Calculation(); return;}
// }


// void MainWindow::on_length_clicked()
// {
//     // set the area text for example
    // ui->Eqaution_symbol->setText("L =");
    // ui->pushButton_2->setText("(2/P)");
    // ui->pushButton->setText("W - ");
    // ui->input1_label->setText("W   width");
    // ui->input2_label->setText("P   perimeter");
    // // set operation
    // Operation = Operation_type::length;
    // if (data1 > 0 && data2 > 0){Calculation(); return;}
// }

//-----------------------------------------------------------------------------------------------------------------------
//paint function
void MainWindow::paintShape(){
    //set the scene to hold the diagram for area
    //instance of qgraphics
    QGraphicsScene *scene = new QGraphicsScene();
    //instance of text labels
    QGraphicsTextItem *textItem = new QGraphicsTextItem("a");
    ui->area_diagram->setScene(scene);
    QGraphicsRectItem *rectangle = new QGraphicsRectItem(100, 100, 100, 50); // x, y, width, height
    scene->addItem(rectangle);

    QPen pen(Qt::black);
    pen.setWidth(1.5);
    rectangle->setPen(pen);

    QBrush brush(Qt::blue);
    rectangle->setBrush(brush);

    //item position
    textItem->setPos(100,50);
    textItem->setDefaultTextColor(Qt::red);

}

// void MainWindow::on_displayShape_clicked()
// {
//     paintShape();
// }




