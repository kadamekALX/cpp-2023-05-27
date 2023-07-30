#ifndef GAMEWIDGET_H
#define GAMEWIDGET_H

#include <QWidget>

class GameWidget : public QWidget
{
    Q_OBJECT

public:
    GameWidget(QWidget *parent = nullptr);
    ~GameWidget();



protected:
    void paintEvent(QPaintEvent *event) override;

private:
    bool state[5][5];
};
#endif // GAMEWIDGET_H
