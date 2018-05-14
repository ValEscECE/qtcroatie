#include "light.h"

const char* lightOnFile = "light-on.png";
const char* lightOffFile = "light-off.png";

Light::Light() : Module()
{

}

Light:: Light(std::string name, bool state, QWidget* parent) : Module(name, state, parent)
{
    //mPixmapImgON = new QPixmap(lightOnFile);
    //mPixmapImgOFF = new QPixmap(lightOffFile);
    mLabelImg = new QLabel(this);
    mLabelImg->setText("Light OFF");
    //mLabelImg->setPixmap(QPixmap("light-on.png"));
    //move(10,10);
    /*QGridLayout *gridLayout = new QGridLayout;
    gridLayout->addWidget(mLabelImg);
    this->setLayout(gridLayout);*/
}

// A slot that answer to switch button signal
void Light::switchPixmap()
{
    mState =! mState;
    if (mState)
    {
         //mLabelImg->setPixmap(QPixmap("lighton.png"));
        mLabelImg->setText("Light ON");
    }
    else{mLabelImg->setText("Light OFF");
    }  //mLabelImg->setPixmap(QPixmap("lightoff.png"));
}

Light::~Light()
{

}
