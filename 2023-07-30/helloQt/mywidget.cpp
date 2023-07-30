#include "mywidget.h"

#include <iostream>
#include "counterbutton.h"

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
{
    resize(500, 500);
    for (int i = 0; i < 5; i += 1) {
        for (int j = 0; j < 5; j += 1) {
            CounterButton* btn = new CounterButton{this};
            btn->move(100 * j, 100 * i);
            btn->resize(100, 100);
        }
    }
}

MyWidget::~MyWidget()
{
}
