#include "widget.h"
#include <QApplication>


int main(int argc,char** argv)
{
    QApplication app(argc,argv);

    Widget w;
    w.setFixedSize(320,480);
    w.setWindowTitle("2048");
    w.setWindowIcon(QIcon("://res//2048.jpg"));
    w.show();

    return app.exec();
}
