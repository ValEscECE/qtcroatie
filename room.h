#ifndef ROOM_H
#define ROOM_H

#include <QWidget>
#include <QVBoxLayout>
#include "module.h"
#include "switch.h"
#include "light.h"

class Room : public QWidget
{
    Q_OBJECT                        // Needs this to create signals and slots
public:
    explicit Room(std::string name, int id, QWidget* parent);
    ~Room();
    bool fillRoom(/* json structure to parse ? */);
    std::vector<Switch*> mSwitches;  // List of modules present in the room

private:
    std::string mName = "";         // Name of the room
    int mModulesCount = 0;          // Number of modules
    int mId = 0;                    // Room ID (for the room list)
    int mWidth = 600;               // Widget width
    int mHeight = 350;              // Widget Height
    QVBoxLayout* mLayout;            // Layout to display

    bool addSwitch(Switch* sSwitch);

signals:

public slots:
};

#endif // ROOM_H
