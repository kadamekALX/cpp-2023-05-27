#include "mywidget.h"

#include <QBoxLayout>
#include <iostream>
#include "counterbutton.h"

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
{
    //korzystając z QBoxLayout, stwórz dynamiczną
    //siatkę 5x5 przycisków CounterButton
    //Dodatkowo wyświetl przycisk, którego naciśnięcie
    //zresetuje wszystkie liczniki

    resize(500, 500);
    QHBoxLayout* layout = new QHBoxLayout{this};
    layout->addWidget(new CounterButton{this});
    QBoxLayout* pionowy = new QVBoxLayout{};
    layout->addLayout(pionowy);
    pionowy->addWidget(new CounterButton{this});
    pionowy->addWidget(new CounterButton{this});
    pionowy->addWidget(new CounterButton{this});
    layout->addWidget(new CounterButton{this});
//    for (int i = 0; i < 5; i += 1) {
//        for (int j = 0; j < 5; j += 1) {
//            CounterButton* btn = new CounterButton{this};
//            btn->move(100 * j, 100 * i);
//            btn->resize(100, 100);
//        }
//    }
}

MyWidget::~MyWidget()
{
}
