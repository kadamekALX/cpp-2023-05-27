#include "mybutton.h"
#include "mywidget.h"

#include <QResizeEvent>
#include <iostream>

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
{
    MyButton* btn = new MyButton{this};
    btn->resize(300, 200);
    QPushButton* b = new QPushButton{"Przycisk", this};
    b->resize(300, 200);
    b->move(300, 0);
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

