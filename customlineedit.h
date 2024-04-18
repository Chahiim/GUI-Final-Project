#ifndef CUSTOMLINEEDIT_H
#define CUSTOMLINEEDIT_H

#include <QLineEdit>
#include <QGraphicsView>
#include <QMessageBox>
#include <QDebug>
#include <QMouseEvent>
#include <QPointF>
#include <QPen>
#include <QPolygonF>
#include <QFocusEvent>
#include <QGuiApplication>
#include <QFile>
#include <QFileDialog>
#include <qtranslator.h>
#include <QtPrintSupport/QPrintDialog>
#include <QtPrintSupport/QPrinter>
#include <QInputDialog>
#include <QClipboard>
class CustomLineEdit : public QLineEdit
{
    Q_OBJECT

public:
    CustomLineEdit(QWidget *parent = nullptr);
    ~CustomLineEdit();

signals:
    void focussed(bool hasFocus);

protected:
   virtual void focusInEvent(QFocusEvent *event);
   virtual void focusOutEvent(QFocusEvent *event);


};

#endif // CUSTOMLINEEDIT_H
