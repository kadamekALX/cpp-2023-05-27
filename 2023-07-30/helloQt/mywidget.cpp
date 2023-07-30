#include "mywidget.h"

#include <QBoxLayout>
#include <iostream>
#include "counterbutton.h"

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
{
    CounterButton* tab[5][5];
//    std::vector<std::vector<CounterButton*>> tab;

    QPushButton* reset = new QPushButton{"RESET", this};

    QHBoxLayout* glowny_layout = new QHBoxLayout{this};
    for (int i = 0; i < 5; i += 1) {
        QVBoxLayout* pionowy = new QVBoxLayout{};
        glowny_layout->addLayout(pionowy);
        for (int j = 0; j < 5; j += 1) {

            tab[i][j] = new CounterButton{this};
            connect(reset, &QPushButton::clicked, tab[i][j], &CounterButton::resetCounter);
            pionowy->addWidget(tab[i][j]);
        }
    }
    glowny_layout->addWidget(reset);

    connect(tab[4][4], &QPushButton::clicked, tab[0][0], &CounterButton::buttonClicked);

}

MyWidget::~MyWidget()
{
}
