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
    QPushButton* reset = new QPushButton{"RESET", this};

    QHBoxLayout* glowny_layout = new QHBoxLayout{this};
    for (int i = 0; i < 5; i += 1) {
        QVBoxLayout* pionowy = new QVBoxLayout{};
        glowny_layout->addLayout(pionowy);
        for (int j = 0; j < 5; j += 1) {

            CounterButton* btn = new CounterButton{this};
            connect(reset, &QPushButton::clicked, btn, &CounterButton::resetCounter);
            pionowy->addWidget(btn);
        }
    }
    glowny_layout->addWidget(reset);
}

MyWidget::~MyWidget()
{
}
