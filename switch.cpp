#include "switch.h"

Switch::Switch()
{

}
Switch::Switch(std::string name, bool state, QWidget* parent) : Module(name, state, parent)
{
    mState = state;
    mName = name;
    mButton =  new QPushButton("SWITCH 1", this);
}

Switch::~Switch()
{

}
