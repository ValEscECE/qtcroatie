#ifndef ROOM_H
#define ROOM_H

#include <QWidget>
#include "module.h"

class Room : public QWidget
{
    Q_OBJECT
public:
    explicit Room(std::string name, int id, QWidget* parent);
    ~Room();
    std::vector<Module*> mModules;

private:
    std::string mName = "";
    int mModulesCount = 0;
    int mId = 0;
    int mWidth = 600;
    int mHeight = 350;

signals:

public slots:
};

#endif // ROOM_H
