#include "counterbutton.h"

CounterButton::CounterButton(QWidget* parent)
    : QPushButton{"0", parent}, counter{0}
{
    connect(this, &CounterButton::clicked, this, &CounterButton::buttonClicked);
}

void CounterButton::buttonClicked()
{
    setText(QString::number(++counter));
}
