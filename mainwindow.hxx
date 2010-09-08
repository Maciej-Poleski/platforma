#ifndef MAINWINDOW_HXX
#define MAINWINDOW_HXX

#include <QtGui/QMainWindow>

class MainWindow;
extern MainWindow* mainWindow;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
};

extern MainWindow* mainWindow;

#endif // MAINWINDOW_HXX
