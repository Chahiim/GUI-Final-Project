#include "customlineedit.h"

CustomLineEdit::CustomLineEdit(QWidget *parent)
    : QLineEdit(parent)
{
}

CustomLineEdit::~CustomLineEdit()
{}

void CustomLineEdit::focusInEvent(QFocusEvent *event)
{
    try{
        emit focussed(true);
        //qDebug() << "emmited";
    }catch(...){
         qDebug() << "error";
    }

    QLineEdit::focusInEvent(event);
   // qDebug() << "in";
}

void CustomLineEdit::focusOutEvent(QFocusEvent *event)
{
    emit focussed(false);
    QLineEdit::focusOutEvent(event);
    //qDebug() << "out";
}

//This is a test checking for gitkraken connection.!
