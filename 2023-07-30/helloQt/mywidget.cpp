#include "mywidget.h"

#include <iostream>
#include <QPushButton>

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
{
    resize(600, 400);
    btn = new QPushButton{"Click me!", this};
    connect(btn, &QPushButton::clicked, this, &MyWidget::buttonClicked);
}

MyWidget::~MyWidget()
{
}

void MyWidget::buttonClicked()
{
    btn->setText("Bravo!");
}

//Stworz przycisk z licznikiem, który z każdym
//kliknięciem bedzie zwiększał ten licznik o 1

