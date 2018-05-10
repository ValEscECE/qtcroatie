#include "room.h"

Room::Room(std::string name, int id, QWidget* parent) : QWidget(parent)
{
    mName = name;
    mId = id;
    setFixedSize(mWidth, mHeight);
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
