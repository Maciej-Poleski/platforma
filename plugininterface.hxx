#ifndef PLUGININTERFACE_HXX
#define PLUGININTERFACE_HXX

#include <QtCore/QtPlugin>

class PluginInterface
{
public:
    virtual ~PluginInterface() {}

    virtual void install()=0;
};

Q_DECLARE_INTERFACE(PluginInterface,"PluginInterface/1.0")

#endif // PLUGININTERFACE_HXX
