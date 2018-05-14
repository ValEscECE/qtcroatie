#include "room.h"

Room::Room(std::string name, int id, QWidget* parent) : QWidget(parent)
{
    mName = name;
    mId = id;
    setFixedSize(mWidth, mHeight);
    mLayout = new QVBoxLayout;
    setLayout(mLayout);
}

bool Room::fillRoom(){

    // TODO: for each module, create it and push it

    // Create a switch
    Switch* sSwitch = new Switch ("SWITCH 1", false, this);

    // TODO: parse the rest to know lights linked to this switch
    sSwitch->fillSwitch();

    // Add switch to list
    addSwitch(sSwitch);
}

bool Room::addSwitch(Switch* sSwitch){
    mSwitches.push_back(sSwitch);
    mLayout->addWidget(sSwitch);
}

Room::~Room()
{
    // Delete everything
    for(int i=0; i<mSwitches.size(); i++)
    {
        delete mSwitches[i];
        mSwitches[i] = 0;
    }
}
