#ifndef MYBUTTON_H
#define MYBUTTON_H

#include <QPushButton>

class MyButton : public QPushButton
{
    Q_OBJECT
public:
    MyButton(QWidget* parent = nullptr);

protected:
    void mousePressEvent(QMouseEvent* event) override;
};

#endif // MYBUTTON_H
