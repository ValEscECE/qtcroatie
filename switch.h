#ifndef SWITCH_H
#define SWITCH_H
#include <QPushButton>

#include "module.h"
#include "light.h"

class Switch : public Module
{
public:
    Switch();
    Switch(std::string name, bool state, QWidget* parent);
    virtual ~Switch();
    QPushButton* mButton;

/* TO EMIT SIGNAL */
// signals:
//      void mSignal();
// when we want it to occurs:
// emit mSignal();

private:
    // TODO: think about switches having vectors of lights
    //std::vector <Light*> sLights;


};

#endif // SWITCH_H
