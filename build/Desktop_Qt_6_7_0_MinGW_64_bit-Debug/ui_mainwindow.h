/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include "customlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *subName;
    QLabel *indexChange;
    QStackedWidget *stackedWidgetArea;
    QWidget *page;
    QWidget *page_3;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *symbol;
    QLineEdit *lengthValue;
    QLabel *Result;
    QLabel *labelVal1;
    QLabel *LabelWorkings;
    QLabel *labelVal2;
    QLineEdit *widthValue;
    QGraphicsView *area_diagram;
    QLabel *LabelSolution;
    QWidget *page_4;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    CustomLineEdit *input2_2;
    QLabel *Eqaution_symbol_2;
    QLabel *areaResult_2;
    QLabel *areaLabelLength_2;
    CustomLineEdit *input1_2;
    QLabel *areaLabelWidth_2;
    QLabel *areaLabelWorkings_3;
    QPushButton *displayShape_2;
    QLabel *areaLabelSolution_2;
    QGraphicsView *area_diagram_2;
    QWidget *page_5;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    CustomLineEdit *input1_3;
    QGraphicsView *area_diagram_3;
    QLabel *areaResult_3;
    CustomLineEdit *input2_3;
    QLabel *areaLabelLength_3;
    QPushButton *displayShape_3;
    QLabel *areaLabelWidth_3;
    QLabel *Eqaution_symbol_3;
    QLabel *areaLabelSolution_4;
    QLabel *areaLabelSolution_5;
    QLabel *areaLabelSolution_3;
    QLabel *areaLabelWorkings_4;
    QComboBox *comboBox;
    QLabel *calculatorName;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(699, 555);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        subName = new QLabel(centralwidget);
        subName->setObjectName("subName");
        subName->setGeometry(QRect(20, 60, 81, 20));
        QFont font;
        font.setPointSize(13);
        subName->setFont(font);
        indexChange = new QLabel(centralwidget);
        indexChange->setObjectName("indexChange");
        indexChange->setGeometry(QRect(260, 70, 63, 20));
        stackedWidgetArea = new QStackedWidget(centralwidget);
        stackedWidgetArea->setObjectName("stackedWidgetArea");
        stackedWidgetArea->setGeometry(QRect(50, 110, 561, 381));
        stackedWidgetArea->setAutoFillBackground(true);
        stackedWidgetArea->setFrameShape(QFrame::Box);
        stackedWidgetArea->setFrameShadow(QFrame::Sunken);
        page = new QWidget();
        page->setObjectName("page");
        stackedWidgetArea->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        gridLayoutWidget = new QWidget(page_3);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(40, 30, 471, 321));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        symbol = new QLabel(gridLayoutWidget);
        symbol->setObjectName("symbol");
        symbol->setBaseSize(QSize(3, 3));
        QFont font1;
        font1.setPointSize(27);
        font1.setBold(true);
        symbol->setFont(font1);

        gridLayout->addWidget(symbol, 0, 0, 1, 1);

        lengthValue = new QLineEdit(gridLayoutWidget);
        lengthValue->setObjectName("lengthValue");

        gridLayout->addWidget(lengthValue, 1, 1, 1, 1);

        Result = new QLabel(gridLayoutWidget);
        Result->setObjectName("Result");
        Result->setFont(font1);

        gridLayout->addWidget(Result, 0, 1, 1, 1);

        labelVal1 = new QLabel(gridLayoutWidget);
        labelVal1->setObjectName("labelVal1");
        labelVal1->setBaseSize(QSize(3, 3));
        QFont font2;
        font2.setPointSize(16);
        labelVal1->setFont(font2);

        gridLayout->addWidget(labelVal1, 1, 0, 1, 1);

        LabelWorkings = new QLabel(gridLayoutWidget);
        LabelWorkings->setObjectName("LabelWorkings");
        QFont font3;
        font3.setPointSize(13);
        font3.setBold(true);
        LabelWorkings->setFont(font3);

        gridLayout->addWidget(LabelWorkings, 4, 0, 1, 2);

        labelVal2 = new QLabel(gridLayoutWidget);
        labelVal2->setObjectName("labelVal2");
        labelVal2->setBaseSize(QSize(3, 3));
        labelVal2->setFont(font2);

        gridLayout->addWidget(labelVal2, 2, 0, 1, 1);

        widthValue = new QLineEdit(gridLayoutWidget);
        widthValue->setObjectName("widthValue");

        gridLayout->addWidget(widthValue, 2, 1, 1, 1);

        area_diagram = new QGraphicsView(gridLayoutWidget);
        area_diagram->setObjectName("area_diagram");

        gridLayout->addWidget(area_diagram, 1, 2, 3, 1);

        LabelSolution = new QLabel(gridLayoutWidget);
        LabelSolution->setObjectName("LabelSolution");
        LabelSolution->setFont(font);

        gridLayout->addWidget(LabelSolution, 3, 0, 1, 2);

        stackedWidgetArea->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        gridLayoutWidget_2 = new QWidget(page_4);
        gridLayoutWidget_2->setObjectName("gridLayoutWidget_2");
        gridLayoutWidget_2->setGeometry(QRect(40, 30, 471, 321));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        input2_2 = new CustomLineEdit(gridLayoutWidget_2);
        input2_2->setObjectName("input2_2");

        gridLayout_2->addWidget(input2_2, 2, 1, 1, 1);

        Eqaution_symbol_2 = new QLabel(gridLayoutWidget_2);
        Eqaution_symbol_2->setObjectName("Eqaution_symbol_2");
        Eqaution_symbol_2->setBaseSize(QSize(3, 3));
        Eqaution_symbol_2->setFont(font1);

        gridLayout_2->addWidget(Eqaution_symbol_2, 0, 0, 1, 1);

        areaResult_2 = new QLabel(gridLayoutWidget_2);
        areaResult_2->setObjectName("areaResult_2");

        gridLayout_2->addWidget(areaResult_2, 0, 1, 1, 1);

        areaLabelLength_2 = new QLabel(gridLayoutWidget_2);
        areaLabelLength_2->setObjectName("areaLabelLength_2");
        areaLabelLength_2->setBaseSize(QSize(3, 3));
        areaLabelLength_2->setFont(font2);

        gridLayout_2->addWidget(areaLabelLength_2, 1, 0, 1, 1);

        input1_2 = new CustomLineEdit(gridLayoutWidget_2);
        input1_2->setObjectName("input1_2");

        gridLayout_2->addWidget(input1_2, 1, 1, 1, 1);

        areaLabelWidth_2 = new QLabel(gridLayoutWidget_2);
        areaLabelWidth_2->setObjectName("areaLabelWidth_2");
        areaLabelWidth_2->setBaseSize(QSize(3, 3));
        areaLabelWidth_2->setFont(font2);

        gridLayout_2->addWidget(areaLabelWidth_2, 2, 0, 1, 1);

        areaLabelWorkings_3 = new QLabel(gridLayoutWidget_2);
        areaLabelWorkings_3->setObjectName("areaLabelWorkings_3");
        areaLabelWorkings_3->setFont(font3);

        gridLayout_2->addWidget(areaLabelWorkings_3, 4, 0, 1, 1);

        displayShape_2 = new QPushButton(gridLayoutWidget_2);
        displayShape_2->setObjectName("displayShape_2");

        gridLayout_2->addWidget(displayShape_2, 4, 2, 1, 1);

        areaLabelSolution_2 = new QLabel(gridLayoutWidget_2);
        areaLabelSolution_2->setObjectName("areaLabelSolution_2");
        areaLabelSolution_2->setFont(font);

        gridLayout_2->addWidget(areaLabelSolution_2, 3, 0, 1, 1);

        area_diagram_2 = new QGraphicsView(gridLayoutWidget_2);
        area_diagram_2->setObjectName("area_diagram_2");

        gridLayout_2->addWidget(area_diagram_2, 1, 2, 2, 1);

        stackedWidgetArea->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        gridLayoutWidget_3 = new QWidget(page_5);
        gridLayoutWidget_3->setObjectName("gridLayoutWidget_3");
        gridLayoutWidget_3->setGeometry(QRect(40, 30, 471, 321));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        input1_3 = new CustomLineEdit(gridLayoutWidget_3);
        input1_3->setObjectName("input1_3");

        gridLayout_3->addWidget(input1_3, 1, 1, 1, 1);

        area_diagram_3 = new QGraphicsView(gridLayoutWidget_3);
        area_diagram_3->setObjectName("area_diagram_3");

        gridLayout_3->addWidget(area_diagram_3, 1, 2, 2, 1);

        areaResult_3 = new QLabel(gridLayoutWidget_3);
        areaResult_3->setObjectName("areaResult_3");

        gridLayout_3->addWidget(areaResult_3, 0, 1, 1, 1);

        input2_3 = new CustomLineEdit(gridLayoutWidget_3);
        input2_3->setObjectName("input2_3");

        gridLayout_3->addWidget(input2_3, 2, 1, 1, 1);

        areaLabelLength_3 = new QLabel(gridLayoutWidget_3);
        areaLabelLength_3->setObjectName("areaLabelLength_3");
        areaLabelLength_3->setBaseSize(QSize(3, 3));
        areaLabelLength_3->setFont(font2);

        gridLayout_3->addWidget(areaLabelLength_3, 1, 0, 1, 1);

        displayShape_3 = new QPushButton(gridLayoutWidget_3);
        displayShape_3->setObjectName("displayShape_3");

        gridLayout_3->addWidget(displayShape_3, 6, 2, 1, 1);

        areaLabelWidth_3 = new QLabel(gridLayoutWidget_3);
        areaLabelWidth_3->setObjectName("areaLabelWidth_3");
        areaLabelWidth_3->setBaseSize(QSize(3, 3));
        areaLabelWidth_3->setFont(font2);

        gridLayout_3->addWidget(areaLabelWidth_3, 2, 0, 1, 1);

        Eqaution_symbol_3 = new QLabel(gridLayoutWidget_3);
        Eqaution_symbol_3->setObjectName("Eqaution_symbol_3");
        Eqaution_symbol_3->setBaseSize(QSize(3, 3));
        Eqaution_symbol_3->setFont(font1);

        gridLayout_3->addWidget(Eqaution_symbol_3, 0, 0, 1, 1);

        areaLabelSolution_4 = new QLabel(gridLayoutWidget_3);
        areaLabelSolution_4->setObjectName("areaLabelSolution_4");
        QFont font4;
        font4.setPointSize(11);
        areaLabelSolution_4->setFont(font4);

        gridLayout_3->addWidget(areaLabelSolution_4, 3, 0, 1, 2);

        areaLabelSolution_5 = new QLabel(gridLayoutWidget_3);
        areaLabelSolution_5->setObjectName("areaLabelSolution_5");
        areaLabelSolution_5->setFont(font4);

        gridLayout_3->addWidget(areaLabelSolution_5, 4, 0, 1, 2);

        areaLabelSolution_3 = new QLabel(gridLayoutWidget_3);
        areaLabelSolution_3->setObjectName("areaLabelSolution_3");
        areaLabelSolution_3->setFont(font);

        gridLayout_3->addWidget(areaLabelSolution_3, 5, 0, 1, 2);

        areaLabelWorkings_4 = new QLabel(gridLayoutWidget_3);
        areaLabelWorkings_4->setObjectName("areaLabelWorkings_4");
        areaLabelWorkings_4->setFont(font3);

        gridLayout_3->addWidget(areaLabelWorkings_4, 6, 0, 1, 2);

        stackedWidgetArea->addWidget(page_5);
        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(90, 60, 111, 26));
        QFont font5;
        font5.setBold(false);
        comboBox->setFont(font5);
        comboBox->setAutoFillBackground(false);
        comboBox->setFrame(true);
        calculatorName = new QLabel(centralwidget);
        calculatorName->setObjectName("calculatorName");
        calculatorName->setGeometry(QRect(20, 10, 151, 41));
        QFont font6;
        font6.setPointSize(24);
        calculatorName->setFont(font6);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 699, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidgetArea->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        subName->setText(QCoreApplication::translate("MainWindow", "Solve for", nullptr));
        indexChange->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        symbol->setText(QString());
        Result->setText(QString());
        labelVal1->setText(QCoreApplication::translate("MainWindow", "L      length", nullptr));
        LabelWorkings->setText(QString());
        labelVal2->setText(QCoreApplication::translate("MainWindow", "W    width", nullptr));
        LabelSolution->setText(QString());
        input2_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter value", nullptr));
        Eqaution_symbol_2->setText(QCoreApplication::translate("MainWindow", "P =", nullptr));
        areaResult_2->setText(QString());
        areaLabelLength_2->setText(QCoreApplication::translate("MainWindow", "L      length", nullptr));
        input1_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter value", nullptr));
        areaLabelWidth_2->setText(QCoreApplication::translate("MainWindow", "W    width", nullptr));
        areaLabelWorkings_3->setText(QString());
        displayShape_2->setText(QCoreApplication::translate("MainWindow", "display shape", nullptr));
        areaLabelSolution_2->setText(QCoreApplication::translate("MainWindow", "Solution", nullptr));
        input1_3->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter value", nullptr));
        areaResult_3->setText(QString());
        input2_3->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter value", nullptr));
        areaLabelLength_3->setText(QCoreApplication::translate("MainWindow", "L      length", nullptr));
        displayShape_3->setText(QCoreApplication::translate("MainWindow", "display shape", nullptr));
        areaLabelWidth_3->setText(QCoreApplication::translate("MainWindow", "W    width", nullptr));
        Eqaution_symbol_3->setText(QCoreApplication::translate("MainWindow", "L =", nullptr));
        areaLabelSolution_4->setText(QCoreApplication::translate("MainWindow", "Using this formula", nullptr));
        areaLabelSolution_5->setText(QCoreApplication::translate("MainWindow", "P=2( l + w )", nullptr));
        areaLabelSolution_3->setText(QCoreApplication::translate("MainWindow", "Solution", nullptr));
        areaLabelWorkings_4->setText(QString());
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Select Function", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Area", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "Perimeter", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("MainWindow", "Length", nullptr));

        calculatorName->setText(QCoreApplication::translate("MainWindow", "Rectangle", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
