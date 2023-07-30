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


private:
   QPushButton* btn;
   int counter;
};
#endif // MYWIDGET_H
