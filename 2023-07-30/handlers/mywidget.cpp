#include "mywidget.h"

#include <QResizeEvent>
#include <iostream>

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
{
}


//napisz klasę MyButton, która będzie dziedziczyć po QPushButton
//Kliknięcie w MyButton powinno zmienić jego treść na wspórzędne tego kliknięcia



MyWidget::~MyWidget()
{
}

void MyWidget::resizeEvent(QResizeEvent* event)
{
    const QSize nowy = event->size();
    const QSize stary = event->oldSize();
    std::cout << "resize z " <<
                 stary.width() << 'x' << stary.height()
              << " na " <<
                 nowy.width() << 'x' << nowy.height()
              << std::endl;
}

