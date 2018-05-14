#include <QApplication>
#include "house.h"

const char* gateway_address = "http://example.io/";

int main(int argc, char *argv[])
{
    QApplication qtApp(argc, argv);

    // Instantiate a new house with url
    House* myHouse = new House(gateway_address);

    // Init house and connect to gateway
    if(!myHouse->connectToGateway()){
        //TODO: Log error to connection
        //TODO: Maybe show another window with error message?
        return 1;
    }

    // Send request to get json file and parse it
    if(!myHouse->getJsonFromGateway()){
        // TODO: Log error
        return 1;
    }

    // Fill house
    myHouse->fillHouse();

    // Display main app window
    myHouse->show();

    // TODO: Think about how to continuously request the server and update the app

    // If file received and is valid -> show the house

    return qtApp.exec();
}
