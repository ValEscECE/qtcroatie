#include "switch.h"

Switch::Switch()
{

}
Switch::Switch(std::string name, bool state, QWidget* parent) : Module(name, state, parent)
{
    mState = state;
    mName = name;
    mButton =  new QPushButton("SWITCH 1", this);
    mButton->setGeometry(400,200,150,50);
}

Switch::~Switch()
{

}
