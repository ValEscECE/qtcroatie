#include "room.h"

Room::Room(std::string name, int id, QWidget* parent) : QWidget(parent)
{
    mName = name;
    mId = id;
    setFixedSize(mWidth, mHeight);
    mLayout = new QHBoxLayout;
}

bool Room::fillRoom(){

    // TODO: for each module, create it and push it

    // Create a switch and a light, and push them back to modules list (temporary)
    Switch* sSwitch = new Switch ("sw1", false, this);
    addModule(sSwitch);
    Light* sLight = new Light ("lt1", true, this);
    addModule(sLight);

    setLayout(mLayout);
    // Connect switch and light (temporary)
    QObject::connect(sSwitch->mButton, SIGNAL(clicked()), sLight, SLOT(switchPixmap()));
}

bool Room::addModule(Module* sModule){
    mModules.push_back(sModule);
    mLayout->addWidget(sModule);
}

Room::~Room()
{
    // Delete everything
    for(int i=0; i<mModules.size(); i++)
    {
        delete mModules[i];
        mModules[i] = 0;
    }
}
