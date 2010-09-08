#include "mainwindow.hxx"

#include <QtCore/QCoreApplication>
#include <QtCore/QPluginLoader>
#include <QtCore/QLibrary>
#include <QtCore/QDebug>
#include <QtCore/QDir>

#include <plugininterface.hxx>
#include <../plugin/plugin.hxx>

MainWindow* mainWindow=0;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    mainWindow=this;
    QDir pluginsDir(qApp->applicationDirPath());
    foreach (QString fileName, pluginsDir.entryList(QDir::Files))
    {
        QPluginLoader loader(pluginsDir.absoluteFilePath(fileName));
        QObject *objectPlugin = loader.instance();
        if(objectPlugin)
        {
            qDebug()<<"Plugin loaded";
            PluginInterface* plugin=qobject_cast<PluginInterface*>(objectPlugin);
            if(plugin)
            {
                plugin->install();
                qDebug()<<"Plugin installed";
            }
        }
    }
}

MainWindow::~MainWindow()
{

}
