#include <QtGui/QApplication>
#include "mainwindow.hxx"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    (new MainWindow())->show();
    return a.exec();
}
