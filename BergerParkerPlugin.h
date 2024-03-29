#ifndef BERGERPARKERPLUGIN_H
#define BERGERPARKERPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include <string>
#include <vector>

class BergerParkerPlugin : public Plugin
{
public: 
 std::string toString() {return "BergerParker";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;

};

#endif
