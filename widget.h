#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QKeyEvent>
#include <QPushButton>
#include <QPainter>
#include <QTime>

class Widget : public QWidget
{
    Q_OBJECT
public:
    explicit Widget(QWidget *parent = 0);
    void paintEvent(QPaintEvent *);
    void keyPressEvent(QKeyEvent *event);

    void PressUp();
    void PressDown();
    void PressLeft();
    void PressRight();
    void myRand();

    QPushButton *button;
    int s[4][4];
    int score;
    bool state;

    struct Ns{  //保存空格
        int i;
        int j;
    };


signals:

public slots:
    void slotStart();
};

#endif // WIDGET_H
