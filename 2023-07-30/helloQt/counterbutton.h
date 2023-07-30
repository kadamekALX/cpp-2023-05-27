#ifndef COUNTERBUTTON_H
#define COUNTERBUTTON_H

#include <QPushButton>

class CounterButton : public QPushButton
{
    Q_OBJECT
public:
    CounterButton(QWidget* parent);
public slots:
    void buttonClicked();

private:
    int counter;
};

#endif // COUNTERBUTTON_H
