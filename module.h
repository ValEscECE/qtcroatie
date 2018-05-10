#ifndef MODULE_H
#define MODULE_H

#include <QWidget>

class Module :  public QWidget
{
public:
    Module();
    Module(std::string name, bool state, QWidget* parent);
    virtual ~Module();
    bool mState = false;                // Current state of the module (ON/OFF)
    std::string mName = {};             // Name of the module

private:
    void displayIcon();                 // Display the module itself (maybe should it be
                                        // in the subclass directly?
    int mPosX = 0;                      // Position of the module in the room widget
    int mPosY = 0;
    int mWidth = 100;
    int mHeight = 100;
    // TO ADD: icon to display

};

#endif // MODULE_H
