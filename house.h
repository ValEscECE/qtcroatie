#ifndef HOUSE_H
#define HOUSE_H

#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include "room.h"
#include "module.h"
#include "switch.h"
#include "light.h"


class House : public QWidget
{
    Q_OBJECT
public:
        explicit House(const char* gateway_address);
        ~House();
        bool connectToGateway();                    // Connect to HTTP Server
        bool getJsonFromGateway();                  // Get the json file
        void fillHouse();                           // Fill the house with rooms and modules

private:
        const char* mGatewayAddress;                // URL address of the gateway
        int mRoomsCount = 0;                        // Number of rooms in the house
        std::vector<Room*> mRooms;                  // List of rooms in the house

};

#endif
