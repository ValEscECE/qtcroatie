#include "module.h"

Module::Module()
{

}
Module::Module(std::string name, bool state, QWidget* parent) : QWidget(parent)
{
    mName = name;
    mState = state;
}

Module::~Module()
{

}
