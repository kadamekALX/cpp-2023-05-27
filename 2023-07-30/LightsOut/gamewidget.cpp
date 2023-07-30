#include "gamewidget.h"

#include <QPainter>

GameWidget::GameWidget(QWidget *parent)
    : QWidget(parent)
{
    setFixedSize(500, 500);
}

GameWidget::~GameWidget()
{
}



//Narysuj na całym widżecie na przemian czerwone i zielone
//kwadraty 100x100 (jak na szachownicy)

void GameWidget::paintEvent(QPaintEvent *event)
{
    QPainter malarz{this};
    malarz.drawLine(100, 100, 400, 300);
    malarz.drawRect(50, 50, 300, 100);
    QBrush pedzel{Qt::red};
    malarz.fillRect(400, 300, 100, 100, pedzel);
}

