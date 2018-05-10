#ifndef ROOM_H
#define ROOM_H

#include <QWidget>
#include "module.h"

class Room : public QWidget
{
    Q_OBJECT                        // Needs this to create signals and slots
public:
    explicit Room(std::string name, int id, QWidget* parent);
    ~Room();
    std::vector<Module*> mModules;  // List of modules present in the room

private:
    std::string mName = "";         // Name of the room
    int mModulesCount = 0;          // Number of modules
    int mId = 0;                    // Room ID (for the room list)
    int mWidth = 600;               // Widget width
    int mHeight = 350;              // Widget Height

signals:

public slots:
};

#endif // ROOM_H
