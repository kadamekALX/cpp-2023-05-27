#ifndef MYWIDGET_H
#define MYWIDGET_H




#include <QWidget>

class MyWidget : public QWidget
{
    Q_OBJECT

public:
    MyWidget(QWidget *parent = nullptr);
    ~MyWidget();

protected:
    void resizeEvent(QResizeEvent *event) override;
};
#endif // MYWIDGET_H
