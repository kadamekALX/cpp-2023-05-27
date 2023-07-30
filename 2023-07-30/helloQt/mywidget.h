#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QPushButton>
#include <QWidget>

class MyWidget : public QWidget
{
    Q_OBJECT

public:
    MyWidget(QWidget *parent = nullptr);
    ~MyWidget();
public slots:
   void buttonClicked();
   void buttonClicked2();


private:
   QPushButton* btn;
   int counter;
   QPushButton* btn2;
   int counter2;
};
#endif // MYWIDGET_H
