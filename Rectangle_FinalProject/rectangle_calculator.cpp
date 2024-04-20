#include "rectangle_calculator.h"
#include "ui_rectangle_calculator.h"
#include <QFileDialog>
#include <QFile>
#include <QTextStream>
#include <QVBoxLayout>
#include <QLabel>
#include <QDialog>
#include <QMessageBox>
#include <QPrintDialog>
#include <QPrinter>
#include <QPainter>
#include <QInputDialog>
#include <QClipboard>
#include <QApplication>
#include <QMainWindow>
#include <QPalette>
#include <QPrinter>
#include <QPainter>
#include <QInputDialog>
#include <QGraphicsScene>
#include <QPainter>
#include <QActionGroup>
#include <QPaintEvent>
#include <QGraphicsScene>
#include <QGraphicsPolygonItem>



rectangle_calculator::rectangle_calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::rectangle_calculator)
{
    ui->setupUi(this);

    // Set the background color
    QPalette pal = palette();
    QColor lightGrayColor(192, 192, 192);  // RGB values for a lighter gray
    pal.setColor(QPalette::Window, lightGrayColor);
    setAutoFillBackground(true);
    setPalette(pal);


    // Connect actions to slots
    connect(ui->actionOpen, &QAction::triggered, this, &rectangle_calculator::on_actionOpen_triggered);
    connect(ui->actionNew, &QAction::triggered, this, &rectangle_calculator::on_actionNew_triggered);
    connect(ui->actionShow_Toolbar, &QAction::triggered, this, &rectangle_calculator::on_actionShow_Toolbar_triggered);
    connect(ui->actionHide_Toolbar, &QAction::triggered, this, &rectangle_calculator::on_actionHide_Toolbar_triggered);
    connect(ui->actionRedo, &QAction::triggered, this, &rectangle_calculator::on_actionRedo_triggered);
    connect(ui->actionUndo, &QAction::triggered, this, &rectangle_calculator::on_actionUndo_triggered);
    connect(ui->actionCopy, &QAction::triggered, this, &rectangle_calculator::on_actionCopy_triggered);
    connect(ui->actionPaste, &QAction::triggered, this, &rectangle_calculator::on_actionPaste_triggered);
    connect(ui->actionCut, &QAction::triggered, this, &rectangle_calculator::on_actionCut_triggered);

}

rectangle_calculator::~rectangle_calculator()
{
    delete ui;
}

void rectangle_calculator::on_actionOpen_triggered()
{
    QString filename = QFileDialog::getOpenFileName(this, tr("Open File"), "", tr("Text Files (*.txt)"));
    if (filename.isEmpty()) return;

    // Try to open the selected file in read-only mode.
    QFile file(filename);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) return;

    // Read the contents of the file using a QTextStream and store them in a QString.
    QTextStream in(&file);
    QString content = in.readAll();
    file.close();

    // Display the file content in a new window
    QDialog* dialog = new QDialog(this);
    dialog->setWindowTitle(filename);
    dialog->setModal(false); // Set the modal property to false so the user can interact with other windows.
    QVBoxLayout* layout = new QVBoxLayout(dialog);
    QLabel* label = new QLabel(content, dialog);
    label->setWordWrap(true); // Set the label to wrap text if it exceeds the width of the window.
    label->setTextInteractionFlags(Qt::TextSelectableByMouse | Qt::TextSelectableByKeyboard | Qt::LinksAccessibleByMouse);
    layout->addWidget(label);
    dialog->show(); // use show() instead of exec()
}


void rectangle_calculator::on_actionNew_triggered()
{
    rectangle_calculator* newCalculator = new rectangle_calculator(this);
    newCalculator->setAttribute(Qt::WA_DeleteOnClose); // Ensure the calculator is deleted when closed
    newCalculator->show(); // Show the new calculator window

}


void rectangle_calculator::on_actionSave_triggered()
{
    QString filename = QFileDialog::getSaveFileName(this, tr("Save File"), "", tr("Text Files (*.txt)"));
    if (filename.isEmpty()) return;

    QFile file(filename);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        QMessageBox::warning(this, tr("Warning"), tr("Cannot save file: ") + file.errorString());
        return;
    }

    QTextStream out(&file);

    // Determine the selected option in the combobox
    QString selectedOption = ui->math_functions->currentText();

    if (selectedOption == "Area")
    {
        out << "Area For Rectangle\n";
        out << "Formula: A = w x l\n";
        out << "Width Value: " << ui->area_width->text() << "\n";
        out << "Length Value: " << ui->area_length->text() << "\n";
        out << "Solution: " << ui->area_solution->text() << "\n";
        out << "Final Answer: " << ui->area_answer->text() << "\n";
    }
    else if (selectedOption == "Perimeter")
    {
        out << "Perimeter For Rectangle\n";
        out << "Formula: P = 2 x (l + w)\n";
        out << "Length Value: " << ui->perimeter_length->text() << "\n";
        out << "Width Value: " << ui->perimeter_width->text() << "\n";
        out << "Solution: " << ui->perimeter_solution->text() << "\n";
        out << "Final Answer: " << ui->perimeter_answer->text() << "\n";
    }
    else if (selectedOption == "Length")
    {
        out << "Length For Rectangle\n";
        out << "Formula: L = (P / 2) - w\n";
        out << "Width Value: " << ui->length_width->text() << "\n";
        out << "Perimeter Value: " << ui->length_perimeter->text() << "\n";
        out << "Solution: " << ui->length_solution->text() << "\n";
        out << "Final Answer: " << ui->length_answer->text() << "\n";
    }

    QMessageBox::information(this, tr("Save"), tr("File saved successfully!"));

}


void rectangle_calculator::on_actionPrint_triggered()
{
    // Ask the user for the number of pages to print
    bool ok;
    int pages = QInputDialog::getInt(this, tr("Print"), tr("Number of pages to print:"), 1, 1, 100, 1, &ok);
    if (!ok) return; // User pressed Cancel

    // Proceed with printing
    QPrinter printer(QPrinter::HighResolution);
    QPrintDialog dialog(&printer, this);
    if (dialog.exec() == QDialog::Accepted) {
        // Print the document
        QPainter painter(&printer);
        painter.drawText(100, 100, QString("Printing %1 pages...").arg(pages));
        // Add your printing logic here
    }
}


void rectangle_calculator::on_actionClose_triggered()
{
    // Close only this window
    close();
}


void rectangle_calculator::on_actionExit_triggered()
{
    // Close all windows
    qApp->closeAllWindows();

}


void rectangle_calculator::on_actionCopy_triggered()
{
    // Get the currently focused widget
    QWidget* focusedWidget = QApplication::focusWidget();
    if (focusedWidget) {
        // Check if the focused widget is one of the input fields
        if (focusedWidget == ui->area_length ||
            focusedWidget == ui->area_width ||
            focusedWidget == ui->perimeter_length ||
            focusedWidget == ui->perimeter_width ||
            focusedWidget == ui->length_width ||
            focusedWidget == ui->length_perimeter) {
            // Cast the focused widget to QLineEdit (assuming all input fields are QLineEdit)
            QLineEdit* lineEdit = qobject_cast<QLineEdit*>(focusedWidget);
            if (lineEdit) {
                // Get the selected text (if any) or the whole text
                QString selectedText = lineEdit->selectedText();
                if (selectedText.isEmpty()) {
                    selectedText = lineEdit->text();
                }
                // Copy the text to the clipboard
                QApplication::clipboard()->setText(selectedText);
            }
        }
    }

}


void rectangle_calculator::on_actionPaste_triggered()
{
    // Get the currently focused widget
    QWidget* focusedWidget = QApplication::focusWidget();
    if (focusedWidget) {
        // Check if the focused widget is one of the input fields
        if (focusedWidget == ui->area_length ||
            focusedWidget == ui->area_width ||
            focusedWidget == ui->perimeter_length ||
            focusedWidget == ui->perimeter_width ||
            focusedWidget == ui->length_width ||
            focusedWidget == ui->length_perimeter) {
            // Cast the focused widget to QLineEdit (assuming all input fields are QLineEdit)
            QLineEdit* lineEdit = qobject_cast<QLineEdit*>(focusedWidget);
            if (lineEdit) {
                // Get the text from the clipboard and paste it into the input field
                QString text = QApplication::clipboard()->text();
                lineEdit->setText(text);
            }
        }
    }

}


void rectangle_calculator::on_actionCut_triggered()
{

}


void rectangle_calculator::on_actionRedo_triggered()
{

}


void rectangle_calculator::on_actionUndo_triggered()
{

}


void rectangle_calculator::on_actionShow_Toolbar_triggered()
{
    // Show the toolbar
    ui->toolBar->setVisible(true);
}


void rectangle_calculator::on_actionHide_Toolbar_triggered()
{
    // Hide the toolbar
    ui->toolBar->setVisible(false);
}


void rectangle_calculator::on_actionAbout_triggered()
{
    QMessageBox::about(this, tr("About"), tr("This Group A's GUI Final Project. Finding the area, perimeter, and length of a rectangle."));
}


void rectangle_calculator::on_math_functions_currentIndexChanged(int index)
{
    if (index == 0) { // Area selected
        ui->stackedWidget->setCurrentIndex(0); // Show the area page
    } else if (index == 1) { // Perimeter selected
        ui->stackedWidget->setCurrentIndex(1); // Show the perimeter page
    } else if (index == 2) { // Length selected
        ui->stackedWidget->setCurrentIndex(2); // Show the length page
    }
}


void rectangle_calculator::on_area_solve_button_clicked()
{
    // Get the length and width values
    double length = ui->area_length->text().toDouble();
    double width = ui->area_width->text().toDouble();

    // Calculate the area
    double area = length * width;

    // Update the area_answer QLabel with the result
    ui->area_answer->setText(QString::number(area));

    // Update the area_solution QLabel with the formula and result
    ui->area_solution->setText(QString("A = %1 x %2 = %3").arg(length).arg(width).arg(area));
}


void rectangle_calculator::on_area_clear_button_clicked()
{
    // Clear the length and width inputs
    ui->area_length->clear();
    ui->area_width->clear();

    // Reset the area_answer QLabel
    ui->area_answer->clear();

    // Clear the area_solution QLabel
    ui->area_solution->clear();

}


void rectangle_calculator::on_perimeter_solve_button_clicked()
{
    // Get the length and width values
    double length = ui->perimeter_length->text().toDouble();
    double width = ui->perimeter_width->text().toDouble();

    // Calculate the perimeter
    double perimeter = 2 * (length + width);

    // Update the perimeter_answer QLabel with the result
    ui->perimeter_answer->setText(QString::number(perimeter));

    // Update the perimeter_solution QLabel with the formula and result
    ui->perimeter_solution->setText(QString("P = 2 x (%1 + %2) = %3").arg(length).arg(width).arg(perimeter));

}


void rectangle_calculator::on_perimeter_clear_button_clicked()
{
    // Clear the length, width, answer, and solution
    ui->perimeter_length->clear();
    ui->perimeter_width->clear();
    ui->perimeter_answer->clear();
    ui->perimeter_solution->clear();
}


void rectangle_calculator::on_length_solve_button_clicked()
{
    // Get the width and perimeter values
    double width = ui->length_width->text().toDouble();
    double perimeter = ui->length_perimeter->text().toDouble();

    // Calculate the length
    double length = (perimeter / 2) - width;

    // Update the length_answer QLabel with the result
    ui->length_answer->setText(QString::number(length));

    // Update the length_solution QLabel with the formula and result
    ui->length_solution->setText(QString("L = (%1 / 2) - %2 = %3").arg(perimeter).arg(width).arg(length));

}


void rectangle_calculator::on_length_clear_button_clicked()
{
    // Clear the width and perimeter inputs
    ui->length_width->clear();
    ui->length_perimeter->clear();

    // Reset the length_answer QLabel
    ui->length_answer->clear();

    // Clear the length_solution QLabel
    ui->length_solution->clear();
}


void rectangle_calculator::paintEvent(QPaintEvent *e)
{
    // Draw the Diagram into the graphic view
    e->accept(); // to avoid warning

    QGraphicsScene *scene = new QGraphicsScene();
    ui->area_diagram->setScene(scene);
    ui->perimeter_diagram->setScene(scene);
    ui->length_diagram->setScene(scene);

    // Draw the rectangle on the QGraphicsScene
    QPolygonF rectangle;
    rectangle << QPointF(0, 0) << QPointF(200, 0) << QPointF(200, 100) << QPointF(0, 100);

    QGraphicsPolygonItem* rectangleItem1 = new QGraphicsPolygonItem(rectangle);
    ui->area_diagram->scene()->addItem(rectangleItem1);

    QGraphicsPolygonItem* rectangleItem2 = new QGraphicsPolygonItem(rectangle);
    ui->perimeter_diagram->scene()->addItem(rectangleItem2);

    QGraphicsPolygonItem* rectangleItem3 = new QGraphicsPolygonItem(rectangle);
    ui->length_diagram->scene()->addItem(rectangleItem3);

    // QPen pen(Qt::black);
    // pen.setWidth(1.5);
    // rectangleItem1->setPen(pen);

    //     QBrush brush(Qt::Key_LightBulb);
    //     rectangleItem->setBrush(brush);

    //item position
    // rectangleItem->setPos(100,50);
    // rectangleItem->setDefaultTextColor(Qt::red);


    // Highlight the different lines of the diagram based on the current page
    if(ui->stackedWidget->currentIndex() == 0) // Area page
    {
        if (ui->area_length->hasFocus() == true ) {
            ui->area_diagram->scene()->clear();
            highlightLengthLine(ui->area_diagram); // Highlight base line in area diagram
        }
        else if (ui->area_width->hasFocus() == true){
            ui->area_diagram->scene()->clear();
            highlightWidthLine(ui->area_diagram); // Highlight height line in area diagram
        }
    }
    else if(ui->stackedWidget->currentIndex() ==1) // Perimeter page
    {
        if(ui->perimeter_length->hasFocus()== true){
            ui->perimeter_diagram->scene()->clear();
            highlightLengthLine(ui->perimeter_diagram);  // Highlight base line in perimeter diagram
        }
        else if(ui->perimeter_width->hasFocus() == true)
        {
            ui->perimeter_diagram->scene()->clear();
            highlightWidthLine(ui->perimeter_diagram); // Highlight side line in perimeter diagram
        }
    }
    else if(ui->stackedWidget->currentIndex() == 2) //length  page
    {
        if(ui->perimeter_length->hasFocus()==true)
        {
            ui->length_diagram->scene()->clear();
            highlightLengthLine( ui->length_diagram); // Highlight base line in height diagram
        }
        //peremiter function works, i just cant get the last page of the stack widget to show the selected highlight

        else if(ui->perimeter_width->hasFocus()==true)
        {
            ui->length_diagram->scene()->clear();
            highlightArea( ui->length_diagram); // Highlight area in height diagram
        }
    }
}

void rectangle_calculator::highlightLengthLine(QGraphicsView *view)
{
    // Create a new QGraphicsScene to hold the highlighted line
    QGraphicsScene *scene = new QGraphicsScene();
    view->setScene(scene);

    // Draw the rectangle on the QGraphicsScene
    QPolygonF rectangle;
    rectangle << QPointF(0, 0) << QPointF(200, 0) << QPointF(200, 100) << QPointF(0, 100);

    // Add the rectangle to the scene
    QGraphicsPolygonItem* rectangleItem = new QGraphicsPolygonItem(rectangle);
    scene->addItem(rectangleItem);

    // Highlight the longest side of the rectangle
    QGraphicsLineItem* lengthLine = new QGraphicsLineItem(QLineF(QPointF(0, 0), QPointF(200, 0)));
    QPen pen(Qt::red);
    pen.setWidth(2);
    lengthLine->setPen(pen);
    scene->addItem(lengthLine);
}

void rectangle_calculator::highlightWidthLine(QGraphicsView *view){
    // Create a new QGraphicsScene to hold the highlighted line
    QGraphicsScene *scene = new QGraphicsScene();
    view->setScene(scene);
    QPolygonF rectangle;
    rectangle << QPointF(0, 0) << QPointF(200, 0) << QPointF(200, 100) << QPointF(0, 100);

    QGraphicsPolygonItem* rectangleItem = new QGraphicsPolygonItem(rectangle);
    scene->addItem(rectangleItem);

    // Highlight the width of the rectangle
    QGraphicsLineItem* widthLine = new QGraphicsLineItem(QLineF(QPointF(0, 0), QPointF(0, 100)));
    QPen pen(Qt::red);
    pen.setWidth(2);
    widthLine->setPen(pen);
    scene->addItem(widthLine);
}

void rectangle_calculator::highlightPerimeterLine(QGraphicsView *view)
{
    // Create a new QGraphicsScene to hold the highlighted lines
    QGraphicsScene *scene = new QGraphicsScene();

    // Set the QGraphicsView's scene to the newly created QGraphicsScene.
    view->setScene(scene);

    // Draw the rectangle on the QGraphicsScene
    QPolygonF rectangle;
    rectangle << QPointF(0, 0) << QPointF(200, 0) << QPointF(200, 100) << QPointF(0, 100);

    // Add the rectangle to the scene
    QGraphicsPolygonItem* rectangleItem = new QGraphicsPolygonItem(rectangle);
    scene->addItem(rectangleItem);

    // Highlight the perimeter of the rectangle
    QGraphicsLineItem* topLine = new QGraphicsLineItem(QLineF(QPointF(0, 0), QPointF(200, 0)));
    QGraphicsLineItem* rightLine = new QGraphicsLineItem(QLineF(QPointF(200, 0), QPointF(200, 100)));
    QGraphicsLineItem* bottomLine = new QGraphicsLineItem(QLineF(QPointF(200, 100), QPointF(0, 100)));
    QGraphicsLineItem* leftLine = new QGraphicsLineItem(QLineF(QPointF(0, 100), QPointF(0, 0)));

    QPen pen(Qt::red);
    pen.setWidth(2);
    topLine->setPen(pen);
    rightLine->setPen(pen);
    bottomLine->setPen(pen);
    leftLine->setPen(pen);

    scene->addItem(topLine);
    scene->addItem(rightLine);
    scene->addItem(bottomLine);
    scene->addItem(leftLine);
}

void rectangle_calculator::highlightArea(QGraphicsView *view)
{
    QGraphicsScene *scene = new QGraphicsScene();

    // Set the QGraphicsView's scene to the newly created QGraphicsScene.
    view->setScene(scene);

    // Draw the rectangle on the QGraphicsScene
    QPolygonF rectangle;
    rectangle << QPointF(0, 0) << QPointF(200, 0) << QPointF(200, 100) << QPointF(0, 100);

    // Add labels for the rectangle's sides and area.

    // Add the rectangle and text items to the QGraphicsScene

    // Highlight the area
    QGraphicsPolygonItem *areaItem = new QGraphicsPolygonItem(rectangle);
    QBrush brush(Qt::red);
    areaItem->setBrush(brush);
    scene->addItem(areaItem);
}
