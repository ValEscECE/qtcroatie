#ifndef SWITCH_H
#define SWITCH_H
#include <QPushButton>
#include <QHBoxLayout>

#include "module.h"
#include "light.h"

class Switch : public Module
{
public:
    Switch();
    Switch(std::string name, bool state, QWidget* parent);
    virtual ~Switch();    
    bool fillSwitch(/* json structure to parse ? */);

/* TO EMIT SIGNAL */
// signals:
//      void mSignal();
// when we want it to occurs:
// emit mSignal();

private:
    // TODO: think about switches having vectors of lights
    //std::vector <Light*> sLights;
    QPushButton* mButton;
    std::vector <Module*> mModules;
    QHBoxLayout* mLayout;            // Layout to display
    bool addModule(Module* sModule);
    bool connectWithModules();

};

#endif // SWITCH_H
