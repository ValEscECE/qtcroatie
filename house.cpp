#include "house.h"
#include <QObject>

House::House(const char* gateway_address) : QWidget()
{
    mGatewayAddress = gateway_address;
    setFixedSize(800, 500);
    setWindowTitle("Dobardan Valentine");
    /*


    // Construction du bouton
    mButton = new QPushButton("Pimp mon bouton !", this);

    mButton->setFont(QFont("Comic Sans MS", 14));
    mButton->setCursor(Qt::PointingHandCursor);
    mButton->setIcon(QIcon("smile.png"));
    mButton->move(60, 50); */
}

House::~House()
{
        // delete everything
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

    Room* sRoom = new Room("salon", mRoomsCount, this);
    bool* sState = false;
    Switch* sSwitch = new Switch ("sw1", sState, sRoom);
    sRoom->mModules.push_back(sSwitch);
    Light* sLight = new Light ("lt1", sState, sRoom);
    sRoom->mModules.push_back(sLight);

    // Connect switch and light
    QObject::connect(sSwitch->mButton, SIGNAL(clicked()), sLight, SLOT(switchPixmap()));

}

