/********************************************************************************
** Form generated from reading UI file 'rectangle_calculator.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECTANGLE_CALCULATOR_H
#define UI_RECTANGLE_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_rectangle_calculator
{
public:
    QAction *actionOpen;
    QAction *actionNew;
    QAction *actionSave;
    QAction *actionPrint;
    QAction *actionClose;
    QAction *actionExit;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionCut;
    QAction *actionRedo;
    QAction *actionUndo;
    QAction *actionShow_Toolbar;
    QAction *actionHide_Toolbar;
    QAction *actionAbout;
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *Solvefor_label;
    QComboBox *math_functions;
    QSpacerItem *horizontalSpacer_3;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *area_label;
    QLabel *area_answer;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_4;
    QLabel *area_L_label;
    QLabel *area_length_label;
    QHBoxLayout *horizontalLayout_7;
    QLabel *area_W_label;
    QLabel *area_width_label;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *area_length;
    QLineEdit *area_width;
    QVBoxLayout *verticalLayout_3;
    QLabel *area_solution_label;
    QLabel *area_formula;
    QLabel *area_solution;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_7;
    QGraphicsView *area_diagram;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *area_solve_button;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *area_clear_button;
    QSpacerItem *horizontalSpacer_6;
    QWidget *page_2;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_9;
    QLabel *perimeter_label;
    QLabel *perimeter_answer;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout_10;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_11;
    QLabel *perimeter_L_label;
    QLabel *perimeter_length_label;
    QHBoxLayout *horizontalLayout_12;
    QLabel *perimeter_W_label;
    QLabel *perimeter_width_label;
    QVBoxLayout *verticalLayout_10;
    QLineEdit *perimeter_length;
    QLineEdit *perimeter_width;
    QVBoxLayout *verticalLayout_11;
    QLabel *perimeter_solution_label;
    QLabel *primeter_formula;
    QLabel *perimeter_solution;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout_12;
    QGraphicsView *perimeter_diagram;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_13;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *perimeter_solve_button;
    QSpacerItem *horizontalSpacer_11;
    QPushButton *perimeter_clear_button;
    QSpacerItem *horizontalSpacer_10;
    QWidget *page_3;
    QWidget *layoutWidget_5;
    QVBoxLayout *verticalLayout_13;
    QHBoxLayout *horizontalLayout_15;
    QLabel *length_label;
    QLabel *length_answer;
    QSpacerItem *horizontalSpacer_13;
    QHBoxLayout *horizontalLayout_16;
    QVBoxLayout *verticalLayout_14;
    QHBoxLayout *horizontalLayout_17;
    QLabel *length_W_label;
    QLabel *length_width_label;
    QHBoxLayout *horizontalLayout_18;
    QLabel *length_P_label;
    QLabel *length_perimeter_label;
    QVBoxLayout *verticalLayout_15;
    QLineEdit *length_width;
    QLineEdit *length_perimeter;
    QVBoxLayout *verticalLayout_16;
    QLabel *length_solution_label;
    QLabel *length_formula;
    QLabel *length_solution;
    QWidget *layoutWidget_6;
    QVBoxLayout *verticalLayout_17;
    QGraphicsView *length_diagram;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_19;
    QSpacerItem *horizontalSpacer_14;
    QPushButton *length_solve_button;
    QSpacerItem *horizontalSpacer_16;
    QPushButton *length_clear_button;
    QSpacerItem *horizontalSpacer_15;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *RECTANGLE_Label;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuLanguage;
    QMenu *menuView;
    QMenu *menuHelp;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *rectangle_calculator)
    {
        if (rectangle_calculator->objectName().isEmpty())
            rectangle_calculator->setObjectName("rectangle_calculator");
        rectangle_calculator->resize(800, 600);
        actionOpen = new QAction(rectangle_calculator);
        actionOpen->setObjectName("actionOpen");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/Final project Images/open-folder.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon);
        actionNew = new QAction(rectangle_calculator);
        actionNew->setObjectName("actionNew");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/Final project Images/new-folder.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon1);
        actionSave = new QAction(rectangle_calculator);
        actionSave->setObjectName("actionSave");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/Final project Images/diskette (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon2);
        actionPrint = new QAction(rectangle_calculator);
        actionPrint->setObjectName("actionPrint");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/Final project Images/printer.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPrint->setIcon(icon3);
        actionClose = new QAction(rectangle_calculator);
        actionClose->setObjectName("actionClose");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/Final project Images/file.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClose->setIcon(icon4);
        actionExit = new QAction(rectangle_calculator);
        actionExit->setObjectName("actionExit");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/Final project Images/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon5);
        actionCopy = new QAction(rectangle_calculator);
        actionCopy->setObjectName("actionCopy");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/Final project Images/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon6);
        actionPaste = new QAction(rectangle_calculator);
        actionPaste->setObjectName("actionPaste");
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/Final project Images/paste (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon7);
        actionCut = new QAction(rectangle_calculator);
        actionCut->setObjectName("actionCut");
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/Final project Images/cutting.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon8);
        actionRedo = new QAction(rectangle_calculator);
        actionRedo->setObjectName("actionRedo");
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/Final project Images/redo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRedo->setIcon(icon9);
        actionUndo = new QAction(rectangle_calculator);
        actionUndo->setObjectName("actionUndo");
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/Final project Images/undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUndo->setIcon(icon10);
        actionShow_Toolbar = new QAction(rectangle_calculator);
        actionShow_Toolbar->setObjectName("actionShow_Toolbar");
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/images/Final project Images/eye.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionShow_Toolbar->setIcon(icon11);
        actionHide_Toolbar = new QAction(rectangle_calculator);
        actionHide_Toolbar->setObjectName("actionHide_Toolbar");
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/images/Final project Images/hidden.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionHide_Toolbar->setIcon(icon12);
        actionAbout = new QAction(rectangle_calculator);
        actionAbout->setObjectName("actionAbout");
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/images/Final project Images/information.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout->setIcon(icon13);
        centralwidget = new QWidget(rectangle_calculator);
        centralwidget->setObjectName("centralwidget");
        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(30, 90, 711, 41));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        Solvefor_label = new QLabel(horizontalLayoutWidget_2);
        Solvefor_label->setObjectName("Solvefor_label");
        QFont font;
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(true);
        Solvefor_label->setFont(font);

        horizontalLayout_2->addWidget(Solvefor_label);

        math_functions = new QComboBox(horizontalLayoutWidget_2);
        math_functions->addItem(QString());
        math_functions->addItem(QString());
        math_functions->addItem(QString());
        math_functions->setObjectName("math_functions");

        horizontalLayout_2->addWidget(math_functions);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(10, 140, 761, 371));
        page = new QWidget();
        page->setObjectName("page");
        layoutWidget = new QWidget(page);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 0, 331, 371));
        verticalLayout_5 = new QVBoxLayout(layoutWidget);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        area_label = new QLabel(layoutWidget);
        area_label->setObjectName("area_label");
        QFont font1;
        font1.setPointSize(23);
        font1.setBold(true);
        font1.setItalic(true);
        area_label->setFont(font1);

        horizontalLayout_3->addWidget(area_label);

        area_answer = new QLabel(layoutWidget);
        area_answer->setObjectName("area_answer");
        QFont font2;
        font2.setPointSize(23);
        font2.setBold(true);
        area_answer->setFont(font2);

        horizontalLayout_3->addWidget(area_answer);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        verticalLayout_5->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        area_L_label = new QLabel(layoutWidget);
        area_L_label->setObjectName("area_L_label");
        QFont font3;
        font3.setPointSize(22);
        font3.setBold(false);
        font3.setItalic(true);
        font3.setUnderline(false);
        font3.setStrikeOut(false);
        area_L_label->setFont(font3);

        horizontalLayout_4->addWidget(area_L_label);

        area_length_label = new QLabel(layoutWidget);
        area_length_label->setObjectName("area_length_label");
        QFont font4;
        font4.setPointSize(11);
        font4.setItalic(true);
        area_length_label->setFont(font4);

        horizontalLayout_4->addWidget(area_length_label);


        verticalLayout_6->addLayout(horizontalLayout_4);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        area_W_label = new QLabel(layoutWidget);
        area_W_label->setObjectName("area_W_label");
        QFont font5;
        font5.setPointSize(22);
        font5.setItalic(true);
        area_W_label->setFont(font5);

        horizontalLayout_7->addWidget(area_W_label);

        area_width_label = new QLabel(layoutWidget);
        area_width_label->setObjectName("area_width_label");
        area_width_label->setFont(font4);

        horizontalLayout_7->addWidget(area_width_label);


        verticalLayout_6->addLayout(horizontalLayout_7);


        horizontalLayout_5->addLayout(verticalLayout_6);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        area_length = new QLineEdit(layoutWidget);
        area_length->setObjectName("area_length");

        verticalLayout_2->addWidget(area_length);

        area_width = new QLineEdit(layoutWidget);
        area_width->setObjectName("area_width");

        verticalLayout_2->addWidget(area_width);


        horizontalLayout_5->addLayout(verticalLayout_2);


        verticalLayout_5->addLayout(horizontalLayout_5);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        area_solution_label = new QLabel(layoutWidget);
        area_solution_label->setObjectName("area_solution_label");
        QFont font6;
        font6.setPointSize(15);
        font6.setBold(true);
        font6.setItalic(true);
        area_solution_label->setFont(font6);

        verticalLayout_3->addWidget(area_solution_label);

        area_formula = new QLabel(layoutWidget);
        area_formula->setObjectName("area_formula");
        QFont font7;
        font7.setFamilies({QString::fromUtf8("Segoe UI Semibold")});
        font7.setPointSize(14);
        font7.setItalic(true);
        area_formula->setFont(font7);

        verticalLayout_3->addWidget(area_formula);

        area_solution = new QLabel(layoutWidget);
        area_solution->setObjectName("area_solution");
        QFont font8;
        font8.setFamilies({QString::fromUtf8("Segoe UI")});
        font8.setPointSize(14);
        font8.setBold(true);
        font8.setItalic(false);
        area_solution->setFont(font8);

        verticalLayout_3->addWidget(area_solution);


        verticalLayout_5->addLayout(verticalLayout_3);

        layoutWidget_2 = new QWidget(page);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(351, 0, 381, 371));
        verticalLayout_7 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        area_diagram = new QGraphicsView(layoutWidget_2);
        area_diagram->setObjectName("area_diagram");

        verticalLayout_7->addWidget(area_diagram);

        verticalSpacer = new QSpacerItem(20, 34, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout_7->addItem(verticalSpacer);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_5);

        area_solve_button = new QPushButton(layoutWidget_2);
        area_solve_button->setObjectName("area_solve_button");

        horizontalLayout_8->addWidget(area_solve_button);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_7);

        area_clear_button = new QPushButton(layoutWidget_2);
        area_clear_button->setObjectName("area_clear_button");

        horizontalLayout_8->addWidget(area_clear_button);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_6);


        verticalLayout_7->addLayout(horizontalLayout_8);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        layoutWidget_3 = new QWidget(page_2);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(10, 0, 331, 371));
        verticalLayout_8 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        perimeter_label = new QLabel(layoutWidget_3);
        perimeter_label->setObjectName("perimeter_label");
        perimeter_label->setFont(font1);

        horizontalLayout_9->addWidget(perimeter_label);

        perimeter_answer = new QLabel(layoutWidget_3);
        perimeter_answer->setObjectName("perimeter_answer");
        QFont font9;
        font9.setPointSize(23);
        perimeter_answer->setFont(font9);

        horizontalLayout_9->addWidget(perimeter_answer);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_8);


        verticalLayout_8->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName("verticalLayout_9");
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        perimeter_L_label = new QLabel(layoutWidget_3);
        perimeter_L_label->setObjectName("perimeter_L_label");
        perimeter_L_label->setFont(font3);

        horizontalLayout_11->addWidget(perimeter_L_label);

        perimeter_length_label = new QLabel(layoutWidget_3);
        perimeter_length_label->setObjectName("perimeter_length_label");
        perimeter_length_label->setFont(font4);

        horizontalLayout_11->addWidget(perimeter_length_label);


        verticalLayout_9->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        perimeter_W_label = new QLabel(layoutWidget_3);
        perimeter_W_label->setObjectName("perimeter_W_label");
        perimeter_W_label->setFont(font5);

        horizontalLayout_12->addWidget(perimeter_W_label);

        perimeter_width_label = new QLabel(layoutWidget_3);
        perimeter_width_label->setObjectName("perimeter_width_label");
        perimeter_width_label->setFont(font4);

        horizontalLayout_12->addWidget(perimeter_width_label);


        verticalLayout_9->addLayout(horizontalLayout_12);


        horizontalLayout_10->addLayout(verticalLayout_9);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName("verticalLayout_10");
        perimeter_length = new QLineEdit(layoutWidget_3);
        perimeter_length->setObjectName("perimeter_length");

        verticalLayout_10->addWidget(perimeter_length);

        perimeter_width = new QLineEdit(layoutWidget_3);
        perimeter_width->setObjectName("perimeter_width");

        verticalLayout_10->addWidget(perimeter_width);


        horizontalLayout_10->addLayout(verticalLayout_10);


        verticalLayout_8->addLayout(horizontalLayout_10);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName("verticalLayout_11");
        perimeter_solution_label = new QLabel(layoutWidget_3);
        perimeter_solution_label->setObjectName("perimeter_solution_label");
        perimeter_solution_label->setFont(font6);

        verticalLayout_11->addWidget(perimeter_solution_label);

        primeter_formula = new QLabel(layoutWidget_3);
        primeter_formula->setObjectName("primeter_formula");
        primeter_formula->setFont(font7);

        verticalLayout_11->addWidget(primeter_formula);

        perimeter_solution = new QLabel(layoutWidget_3);
        perimeter_solution->setObjectName("perimeter_solution");
        perimeter_solution->setFont(font8);

        verticalLayout_11->addWidget(perimeter_solution);


        verticalLayout_8->addLayout(verticalLayout_11);

        layoutWidget_4 = new QWidget(page_2);
        layoutWidget_4->setObjectName("layoutWidget_4");
        layoutWidget_4->setGeometry(QRect(350, 0, 381, 371));
        verticalLayout_12 = new QVBoxLayout(layoutWidget_4);
        verticalLayout_12->setObjectName("verticalLayout_12");
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        perimeter_diagram = new QGraphicsView(layoutWidget_4);
        perimeter_diagram->setObjectName("perimeter_diagram");
        perimeter_diagram->setEnabled(true);

        verticalLayout_12->addWidget(perimeter_diagram);

        verticalSpacer_2 = new QSpacerItem(20, 34, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout_12->addItem(verticalSpacer_2);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_9);

        perimeter_solve_button = new QPushButton(layoutWidget_4);
        perimeter_solve_button->setObjectName("perimeter_solve_button");

        horizontalLayout_13->addWidget(perimeter_solve_button);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_11);

        perimeter_clear_button = new QPushButton(layoutWidget_4);
        perimeter_clear_button->setObjectName("perimeter_clear_button");

        horizontalLayout_13->addWidget(perimeter_clear_button);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_10);


        verticalLayout_12->addLayout(horizontalLayout_13);

        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        layoutWidget_5 = new QWidget(page_3);
        layoutWidget_5->setObjectName("layoutWidget_5");
        layoutWidget_5->setGeometry(QRect(10, 0, 331, 361));
        verticalLayout_13 = new QVBoxLayout(layoutWidget_5);
        verticalLayout_13->setObjectName("verticalLayout_13");
        verticalLayout_13->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        length_label = new QLabel(layoutWidget_5);
        length_label->setObjectName("length_label");
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(length_label->sizePolicy().hasHeightForWidth());
        length_label->setSizePolicy(sizePolicy);
        length_label->setMaximumSize(QSize(16777165, 16777215));
        length_label->setBaseSize(QSize(0, 0));
        length_label->setFont(font1);

        horizontalLayout_15->addWidget(length_label);

        length_answer = new QLabel(layoutWidget_5);
        length_answer->setObjectName("length_answer");
        length_answer->setFont(font9);

        horizontalLayout_15->addWidget(length_answer);

        horizontalSpacer_13 = new QSpacerItem(30, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_13);


        verticalLayout_13->addLayout(horizontalLayout_15);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setObjectName("verticalLayout_14");
        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName("horizontalLayout_17");
        length_W_label = new QLabel(layoutWidget_5);
        length_W_label->setObjectName("length_W_label");
        length_W_label->setFont(font3);

        horizontalLayout_17->addWidget(length_W_label);

        length_width_label = new QLabel(layoutWidget_5);
        length_width_label->setObjectName("length_width_label");
        length_width_label->setFont(font4);

        horizontalLayout_17->addWidget(length_width_label);


        verticalLayout_14->addLayout(horizontalLayout_17);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName("horizontalLayout_18");
        length_P_label = new QLabel(layoutWidget_5);
        length_P_label->setObjectName("length_P_label");
        length_P_label->setFont(font5);

        horizontalLayout_18->addWidget(length_P_label);

        length_perimeter_label = new QLabel(layoutWidget_5);
        length_perimeter_label->setObjectName("length_perimeter_label");
        length_perimeter_label->setFont(font4);

        horizontalLayout_18->addWidget(length_perimeter_label);


        verticalLayout_14->addLayout(horizontalLayout_18);


        horizontalLayout_16->addLayout(verticalLayout_14);

        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setObjectName("verticalLayout_15");
        length_width = new QLineEdit(layoutWidget_5);
        length_width->setObjectName("length_width");

        verticalLayout_15->addWidget(length_width);

        length_perimeter = new QLineEdit(layoutWidget_5);
        length_perimeter->setObjectName("length_perimeter");

        verticalLayout_15->addWidget(length_perimeter);


        horizontalLayout_16->addLayout(verticalLayout_15);


        verticalLayout_13->addLayout(horizontalLayout_16);

        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setObjectName("verticalLayout_16");
        length_solution_label = new QLabel(layoutWidget_5);
        length_solution_label->setObjectName("length_solution_label");
        length_solution_label->setFont(font6);

        verticalLayout_16->addWidget(length_solution_label);

        length_formula = new QLabel(layoutWidget_5);
        length_formula->setObjectName("length_formula");
        length_formula->setFont(font7);

        verticalLayout_16->addWidget(length_formula);

        length_solution = new QLabel(layoutWidget_5);
        length_solution->setObjectName("length_solution");
        QFont font10;
        font10.setPointSize(14);
        font10.setBold(true);
        length_solution->setFont(font10);

        verticalLayout_16->addWidget(length_solution);


        verticalLayout_13->addLayout(verticalLayout_16);

        layoutWidget_6 = new QWidget(page_3);
        layoutWidget_6->setObjectName("layoutWidget_6");
        layoutWidget_6->setGeometry(QRect(351, 0, 381, 361));
        verticalLayout_17 = new QVBoxLayout(layoutWidget_6);
        verticalLayout_17->setObjectName("verticalLayout_17");
        verticalLayout_17->setContentsMargins(0, 0, 0, 0);
        length_diagram = new QGraphicsView(layoutWidget_6);
        length_diagram->setObjectName("length_diagram");

        verticalLayout_17->addWidget(length_diagram);

        verticalSpacer_4 = new QSpacerItem(20, 34, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout_17->addItem(verticalSpacer_4);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName("horizontalLayout_19");
        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_19->addItem(horizontalSpacer_14);

        length_solve_button = new QPushButton(layoutWidget_6);
        length_solve_button->setObjectName("length_solve_button");

        horizontalLayout_19->addWidget(length_solve_button);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_19->addItem(horizontalSpacer_16);

        length_clear_button = new QPushButton(layoutWidget_6);
        length_clear_button->setObjectName("length_clear_button");

        horizontalLayout_19->addWidget(length_clear_button);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_19->addItem(horizontalSpacer_15);


        verticalLayout_17->addLayout(horizontalLayout_19);

        stackedWidget->addWidget(page_3);
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(10, 0, 771, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        RECTANGLE_Label = new QLabel(horizontalLayoutWidget);
        RECTANGLE_Label->setObjectName("RECTANGLE_Label");
        QFont font11;
        font11.setFamilies({QString::fromUtf8("Arial")});
        font11.setPointSize(20);
        font11.setBold(true);
        RECTANGLE_Label->setFont(font11);

        horizontalLayout->addWidget(RECTANGLE_Label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        rectangle_calculator->setCentralWidget(centralwidget);
        menubar = new QMenuBar(rectangle_calculator);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName("menuEdit");
        menuLanguage = new QMenu(menubar);
        menuLanguage->setObjectName("menuLanguage");
        menuView = new QMenu(menubar);
        menuView->setObjectName("menuView");
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName("menuHelp");
        rectangle_calculator->setMenuBar(menubar);
        statusbar = new QStatusBar(rectangle_calculator);
        statusbar->setObjectName("statusbar");
        rectangle_calculator->setStatusBar(statusbar);
        toolBar = new QToolBar(rectangle_calculator);
        toolBar->setObjectName("toolBar");
        rectangle_calculator->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuLanguage->menuAction());
        menubar->addAction(menuView->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionNew);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionPrint);
        menuFile->addAction(actionClose);
        menuFile->addAction(actionExit);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionRedo);
        menuEdit->addAction(actionUndo);
        menuView->addAction(actionShow_Toolbar);
        menuView->addAction(actionHide_Toolbar);
        menuHelp->addAction(actionAbout);
        toolBar->addAction(actionNew);
        toolBar->addAction(actionOpen);
        toolBar->addAction(actionUndo);
        toolBar->addAction(actionRedo);
        toolBar->addAction(actionCopy);
        toolBar->addAction(actionPaste);
        toolBar->addAction(actionCut);
        toolBar->addAction(actionSave);
        toolBar->addAction(actionPrint);

        retranslateUi(rectangle_calculator);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(rectangle_calculator);
    } // setupUi

    void retranslateUi(QMainWindow *rectangle_calculator)
    {
        rectangle_calculator->setWindowTitle(QCoreApplication::translate("rectangle_calculator", "rectangle_calculator", nullptr));
        actionOpen->setText(QCoreApplication::translate("rectangle_calculator", "Open", nullptr));
        actionNew->setText(QCoreApplication::translate("rectangle_calculator", "New", nullptr));
        actionSave->setText(QCoreApplication::translate("rectangle_calculator", "Save", nullptr));
        actionPrint->setText(QCoreApplication::translate("rectangle_calculator", "Print", nullptr));
        actionClose->setText(QCoreApplication::translate("rectangle_calculator", "Close", nullptr));
        actionExit->setText(QCoreApplication::translate("rectangle_calculator", "Exit", nullptr));
        actionCopy->setText(QCoreApplication::translate("rectangle_calculator", "Copy", nullptr));
        actionPaste->setText(QCoreApplication::translate("rectangle_calculator", "Paste", nullptr));
        actionCut->setText(QCoreApplication::translate("rectangle_calculator", "Cut", nullptr));
        actionRedo->setText(QCoreApplication::translate("rectangle_calculator", "Redo", nullptr));
        actionUndo->setText(QCoreApplication::translate("rectangle_calculator", "Undo", nullptr));
        actionShow_Toolbar->setText(QCoreApplication::translate("rectangle_calculator", "Show Toolbar", nullptr));
        actionHide_Toolbar->setText(QCoreApplication::translate("rectangle_calculator", "Hide Toolbar", nullptr));
        actionAbout->setText(QCoreApplication::translate("rectangle_calculator", "About", nullptr));
        Solvefor_label->setText(QCoreApplication::translate("rectangle_calculator", "Solve for", nullptr));
        math_functions->setItemText(0, QCoreApplication::translate("rectangle_calculator", "Area", nullptr));
        math_functions->setItemText(1, QCoreApplication::translate("rectangle_calculator", "Perimeter", nullptr));
        math_functions->setItemText(2, QCoreApplication::translate("rectangle_calculator", "Length", nullptr));

        area_label->setText(QCoreApplication::translate("rectangle_calculator", "A =", nullptr));
        area_answer->setText(QString());
        area_L_label->setText(QCoreApplication::translate("rectangle_calculator", "L", nullptr));
        area_length_label->setText(QCoreApplication::translate("rectangle_calculator", "length", nullptr));
        area_W_label->setText(QCoreApplication::translate("rectangle_calculator", "W", nullptr));
        area_width_label->setText(QCoreApplication::translate("rectangle_calculator", "      width", nullptr));
        area_solution_label->setText(QCoreApplication::translate("rectangle_calculator", "Solution: ", nullptr));
        area_formula->setText(QCoreApplication::translate("rectangle_calculator", "                        A = w x l", nullptr));
        area_solution->setText(QString());
        area_solve_button->setText(QCoreApplication::translate("rectangle_calculator", "Solve", nullptr));
        area_clear_button->setText(QCoreApplication::translate("rectangle_calculator", "Clear", nullptr));
        perimeter_label->setText(QCoreApplication::translate("rectangle_calculator", "P =", nullptr));
        perimeter_answer->setText(QString());
        perimeter_L_label->setText(QCoreApplication::translate("rectangle_calculator", "L    ", nullptr));
        perimeter_length_label->setText(QCoreApplication::translate("rectangle_calculator", "length", nullptr));
        perimeter_W_label->setText(QCoreApplication::translate("rectangle_calculator", "W   ", nullptr));
        perimeter_width_label->setText(QCoreApplication::translate("rectangle_calculator", "width", nullptr));
        perimeter_solution_label->setText(QCoreApplication::translate("rectangle_calculator", "Solution:", nullptr));
        primeter_formula->setText(QCoreApplication::translate("rectangle_calculator", "                   P = 2 ( l + w)", nullptr));
        perimeter_solution->setText(QString());
        perimeter_solve_button->setText(QCoreApplication::translate("rectangle_calculator", "Solve", nullptr));
        perimeter_clear_button->setText(QCoreApplication::translate("rectangle_calculator", "Clear", nullptr));
        length_label->setText(QCoreApplication::translate("rectangle_calculator", "L =", nullptr));
        length_answer->setText(QString());
        length_W_label->setText(QCoreApplication::translate("rectangle_calculator", "W    ", nullptr));
        length_width_label->setText(QCoreApplication::translate("rectangle_calculator", "width", nullptr));
        length_P_label->setText(QCoreApplication::translate("rectangle_calculator", "P", nullptr));
        length_perimeter_label->setText(QCoreApplication::translate("rectangle_calculator", "perimeter", nullptr));
        length_solution_label->setText(QCoreApplication::translate("rectangle_calculator", "Solution:", nullptr));
        length_formula->setText(QCoreApplication::translate("rectangle_calculator", "                    L = ( P/2 )- w", nullptr));
        length_solution->setText(QString());
        length_solve_button->setText(QCoreApplication::translate("rectangle_calculator", "Solve", nullptr));
        length_clear_button->setText(QCoreApplication::translate("rectangle_calculator", "Clear", nullptr));
        RECTANGLE_Label->setText(QCoreApplication::translate("rectangle_calculator", "RECTANGLE", nullptr));
        menuFile->setTitle(QCoreApplication::translate("rectangle_calculator", "File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("rectangle_calculator", "Edit", nullptr));
        menuLanguage->setTitle(QCoreApplication::translate("rectangle_calculator", "Language", nullptr));
        menuView->setTitle(QCoreApplication::translate("rectangle_calculator", "View", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("rectangle_calculator", "Help", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("rectangle_calculator", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class rectangle_calculator: public Ui_rectangle_calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECTANGLE_CALCULATOR_H
