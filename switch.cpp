#include "switch.h"

Switch::Switch()
{

}
Switch::Switch(std::string name, bool state, QWidget* parent) : Module(name, state, parent)
{
    mState = state;
    mName = name;
    mButton =  new QPushButton(name.c_str(), this);
    mLayout = new QHBoxLayout;
    mLayout->addWidget(mButton);
    setLayout(mLayout);
}

Switch::~Switch()
{

}

bool Switch::fillSwitch(){
    // Add two lights to switch
    Light* sLight1 = new Light ("LIGHT 1", true, this);
    this->addModule(sLight1);

    Light* sLight2 = new Light ("LIGHT 2", true, this);
    this->addModule(sLight2);

    connectWithModules();
}

/* TODO: move this part to avoid double declaration (with room) */
bool Switch::addModule(Module* sModule){
    mModules.push_back(sModule);
    mLayout->addWidget(sModule);
}

bool Switch::connectWithModules(){
    for(int i=0; i < mModules.size() ; i++){
        // Connect switch and light (temporary)
        QObject::connect(mButton, SIGNAL(clicked()), mModules[i], SLOT(switchState()));
    }
}

