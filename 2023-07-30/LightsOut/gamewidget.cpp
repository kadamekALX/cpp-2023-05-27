#include "gamewidget.h"

#include <QPainter>

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

//zaimplementuj mousePressEvent, ktory na podstawie
//wspolrzednych klikniecia przełączy odpowiednie pole w tablicy

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

