#include "house.h"
#include <QObject>

House::House(const char* gateway_address) : QWidget()
{
    mGatewayAddress = gateway_address;
    setFixedSize(800, 500);
    setWindowTitle("Dobardan Valentine");
}

House::~House()
{
    // Delete everything
    for(int i=0; i<mRooms.size(); i++)
    {
        delete mRooms[i];
        mRooms[i] = 0;
    }
}

bool House::connectToGateway()
{
    bool connexionStatus = true;
    //TODO: connect to HTTP server

    return connexionStatus;
}

bool House::getJsonFromGateway()
{
    bool jsonValid = false;

    // TODO: request the json file

    // TODO: verify file validity
    jsonValid = true;

    return jsonValid;
}

void House::fillHouse()
{
    // TODO: Read json file
    // For each room, fill the room

    // Current state: create 1 room with 1 switch and 1 light, both of type module

    // TODO: think about how to link switch and light before QObject::connect
    // ? depends on json architecture
    // Maybe a room can have a vetor of switches instead of modules and those
    // switches have lights vectors

    // Create a new room "salon" at index 0
    Room* sRoom = new Room("salon", mRoomsCount, this);
    bool* sState = false;

    // Create a switch and a light, and push them back to modules list
    Switch* sSwitch = new Switch ("sw1", sState, sRoom);
    sRoom->mModules.push_back(sSwitch);
    Light* sLight = new Light ("lt1", sState, sRoom);
    sRoom->mModules.push_back(sLight);

    // Connect switch and light (temporary)
    QObject::connect(sSwitch->mButton, SIGNAL(clicked()), sLight, SLOT(switchPixmap()));

}

