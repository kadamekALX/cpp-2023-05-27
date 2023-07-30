#include "gamewidget.h"

#include <QMouseEvent>
#include <QPainter>
#include <iostream>

GameWidget::GameWidget(QWidget *parent)
    : QWidget(parent)
{
    setFixedSize(500, 500);
    for (int i = 0; i < 5; i += 1) {
        for (int j = 0; j < 5; j += 1) {
            state[i][j] = (i + j) % 3 == 0;
        }
    }
}

GameWidget::~GameWidget()
{
}

//"Praca domowa"
//Zaimplementuj przełączanie pól zgodnie z zasadami gry Lights Out - pole zmienia swój stan jak i stan pól dzielących z nim bok
//Dodatkowo, po każdej zmianie, sprawdź, czy wsztstkie pola są zielone. Jeśli tak to daj użytkownikowi znać, że wygrał (https://doc.qt.io/qt-5/qmessagebox.html)


void GameWidget::paintEvent(QPaintEvent *event)
{
    QPainter malarz{this};
    QBrush czerwony{Qt::red};
    QBrush zielony{Qt::green};
    for (int i = 0; i < 5; i += 1) {
        for (int j = 0; j < 5; j += 1) {
//            malarz.fillRect(100 * j, 100 * i, 100, 100, ((i + j) % 2 == 0 ? czerwony : zielony));
            malarz.fillRect(100 * j, 100 * i, 100, 100, (state[j][i] ? czerwony : zielony));
        }
    }
}

void GameWidget::mousePressEvent(QMouseEvent *event)
{
    int kol = event->x() / 100;
    int wie = event->y() / 100;
    state[kol][wie] = !state[kol][wie];
    std::cout << kol << " " << wie << std::endl;
    repaint();
}

