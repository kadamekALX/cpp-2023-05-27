#include "mybutton.h"
#include <QMouseEvent>

MyButton::MyButton(QWidget* parent)
    : QPushButton{parent}
{

}

//Zadanie: w momencie puszczenia
//myszki napis na przycisku powinien zniknąć

void MyButton::mousePressEvent(QMouseEvent *event)
{
    int x = event->x();
    int y = event->y();
    setText(QString::number(x) + " " + QString::number(y));
    QPushButton::mousePressEvent(event);
}

void MyButton::mouseReleaseEvent(QMouseEvent *event)
{
    setText("");
    QPushButton::mouseReleaseEvent(event);
}
