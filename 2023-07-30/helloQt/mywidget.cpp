#include "mywidget.h"

#include <iostream>
#include <QPushButton>

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent), counter{0}, counter2{0}
{
    resize(600, 400);
    btn = new QPushButton{"0", this};
    btn->move(100, 200);
    btn2 = new QPushButton{"0", this};
    connect(btn, &QPushButton::clicked, this, &MyWidget::buttonClicked);
    connect(btn2, &QPushButton::clicked, this, &MyWidget::buttonClicked2);
}

MyWidget::~MyWidget()
{
}

void MyWidget::buttonClicked()
{
    counter += 1;
    btn->setText(QString::number(counter));
}

void MyWidget::buttonClicked2()
{
    counter2 += 1;
    btn2->setText(QString::number(counter2));
}

//Stwórz 2 przyciski z niezależnymi licznikami
