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
        bool connectToGateway();
        bool getJsonFromGateway();
        void fillHouse();

private:
        //QPushButton* mButton;
        const char* mGatewayAddress;
        int mRoomsCount = 0;
        // Rooms vector
        std::vector<Room*> mRooms; //use push_back() to add rooms

};

#endif
