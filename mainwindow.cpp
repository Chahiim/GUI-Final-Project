//darwyne_azueta testing commit

#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QGraphicsScene>
#include <QPainter>
#include <QActionGroup>
#include <QGraphicsItemGroup>


CustomLineEdit *input1;
CustomLineEdit *input2;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);

    input1 = new CustomLineEdit(this);
    input2 = new CustomLineEdit(this);

    input1->setGeometry(160, 185, 101, 24);
    input1->setEnabled(true);
    input1->setPlaceholderText("Enter value");
    QObject::connect(input1, &CustomLineEdit::focussed, this, &MainWindow::CheckFocus);
    QObject::connect(input1, &CustomLineEdit::textChanged, this, &MainWindow::HandleTextChanged);


    input2->setGeometry(161, 213, 101, 24);
    input2->setEnabled(true);
    input2->setPlaceholderText("Enter value");
    QObject::connect(input2, &CustomLineEdit::focussed, this, &MainWindow::CheckFocus);
    QObject::connect(input2, &CustomLineEdit::textChanged, this, &MainWindow::HandleTextChanged);

    //connect
    // connect(qApp, &QApplication:: , this, &MainWindow::paintShape);

}

MainWindow::~MainWindow()
{
    delete ui;
}

enum Operation_type{
    area,
    perimeter,
    length
};

Operation_type Operation = Operation_type::area;

double data1;
double data2;

void MainWindow::Area(){
    // you can display the error essage in the break down
    if (data1 <= 0 || data2 <= 0){qDebug() << "Error varibale should be positive"; ui->horizontalLayoutWidget->show(); return;}

    // you can show the break down here
    qDebug() << "A = w * l = " << data1 << " * " << data2 << " = " << (data1 * data2);
    //show the answer
    ui->result->setText(QString::number(data1 * data2));
};
void MainWindow::Perimeter(){
    // you can display the error essage in the break down
    if (data1 <= 0 || data2 <= 0){qDebug() << "Error varibale should be positive"; ui->horizontalLayoutWidget->show(); return;}

    // you can show the break down here
    qDebug() << "P = 2(w + l) = 2(" << data1 << " + " << data2 << ") = " << 2*(data1 + data2);
    //show the answer
    ui->result->setText(QString::number(2*(data1 + data2)));
};
void MainWindow::Length(){
    // you can display the error essage in the break down
    if (data1 <= 0 || data2 <= 0){qDebug() << "Error varibale should be positive"; ui->horizontalLayoutWidget->show(); return;}

    // you can display the error essage in the break down
    if (data2 <(data1 * 2)){qDebug()<< "make sure P >(2*W)"; ui->horizontalLayoutWidget->show(); return;}

    //just something for my demo, could be changed in the break down
    qDebug() << "using formula ";
    qDebug() << "P = 2(w + l)";
    qDebug() << "Solving for l";

    qDebug() << "L= (P/2)-W = (" << data2 << "/2) - " << data1 << " = " << (data2/2) - data1;
    //show the answer
    ui->result->setText(QString::number((data2/2) - data1));
};

void MainWindow::CheckFocus(bool val){
    if (val == false){return;}

    if (input1->hasFocus()){
        //make something blue
        qDebug() << "input1 focused";
    }

    if (input2->hasFocus()){
        //make something blue
        qDebug() << "input2 focused";
    }
};

void MainWindow::HandleTextChanged(const QString &val){
    //switch


    if (input1->hasFocus()){
        try{
            data1 = val.toDouble();
            qDebug() << data1;
        }catch(...){
            qDebug() << "error";
        }

        if (data1 > 0 && data2 > 0){
            //make the switch
            ui->horizontalLayoutWidget->hide();
            if (Operation == Operation_type::perimeter){ui->Eqaution_symbol->setText("P = ");}
            return Calculation();
        }
        ui->horizontalLayoutWidget->show();
        if (Operation == Operation_type::perimeter){ui->Eqaution_symbol->setText("P = 2");}
        return;
    }

    if (input2->hasFocus()){
        try{
            data2 = val.toDouble();
            qDebug() << data2;
        }catch(...){
            qDebug() << "error";
        }

        if (data1 > 0 && data2 > 0){
            //make the switch
            ui->horizontalLayoutWidget->hide();
            if (Operation == Operation_type::perimeter){ui->Eqaution_symbol->setText("P = ");}
            return Calculation();
        }
        ui->horizontalLayoutWidget->show();
        if (Operation == Operation_type::perimeter){ui->Eqaution_symbol->setText("P = 2");}
        return;
    }
}

void MainWindow::Calculation(){
    switch (Operation) {

    case Operation_type::area:
        return Area();
        break;

    case Operation_type::perimeter:
        return Perimeter();
        break;

    case Operation_type::length:
        return Length();
        break;

    default:
        break;
    }
}

void MainWindow::on_pushButton_clicked()
{
    //make self blue

    // make focus
    input1->setFocus();

}


void MainWindow::on_pushButton_2_clicked()
{
    //make self blue

    // make focus
    input2->setFocus();
}


void MainWindow::on_area_clicked()
{
    // set the area text for example
    ui->Eqaution_symbol->setText("A =");
    ui->pushButton_2->setText("W");
    ui->pushButton->setText("L*");
    ui->input1_label->setText("L      length");
    ui->input2_label->setText("W     width");
    // set operation
    Operation = Operation_type::area;
    if (data1 > 0 && data2 > 0){Calculation(); return;}
}


void MainWindow::on_perimeter_clicked()
{
    // set the area text for example
    ui->Eqaution_symbol->setText("P = 2");
    ui->pushButton_2->setText("W)");
    ui->pushButton->setText("(L+");
    ui->input1_label->setText("L     length");
    ui->input2_label->setText("W   width");
    // set operation
    Operation = Operation_type::perimeter;
    if (data1 > 0 && data2 > 0){ ui->Eqaution_symbol->setText("P = "); Calculation(); return;}
}


void MainWindow::on_length_clicked()
{
    // set the area text for example
    ui->Eqaution_symbol->setText("L =");
    ui->pushButton_2->setText("(2/P)");
    ui->pushButton->setText("W - ");
    ui->input1_label->setText("W   width");
    ui->input2_label->setText("P   perimeter");
    // set operation
    Operation = Operation_type::length;
    if (data1 > 0 && data2 > 0){Calculation(); return;}
}

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

void MainWindow::on_displayShape_clicked()
{
    paintShape();
}

