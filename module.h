#ifndef MODULE_H
#define MODULE_H

#include <QWidget>

class Module :  public QWidget
{
public:
    Module();
    Module(std::string name, bool state, QWidget* parent);
    virtual ~Module();
    bool mState = false;
    std::string mName = {};

private:
    void displayIcon();
    int mPosX = 0;
    int mPosY = 0;
    int mWidth = 100;
    int mHeight = 100;
    // icon to load

};

#endif // MODULE_H
