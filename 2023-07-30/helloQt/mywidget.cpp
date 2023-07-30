#include "mywidget.h"

#include <iostream>
#include <QPushButton>

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent), counter{0}
{
    resize(600, 400);
    btn = new QPushButton{"0", this};
    connect(btn, &QPushButton::clicked, this, &MyWidget::buttonClicked);
}

MyWidget::~MyWidget()
{
}

void MyWidget::buttonClicked()
{
    counter += 1;
    btn->setText(QString::number(counter));
}

//Stworz przycisk z licznikiem, który z każdym
//kliknięciem bedzie zwiększał ten licznik o 1

