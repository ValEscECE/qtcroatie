#ifndef LIGHT_H
#define LIGHT_H
#include <QLabel>
#include <QPixmap>
#include <QGridLayout>

#include "module.h"


class Light : public Module
{
    Q_OBJECT
public:
    Light();
    Light(std::string name, bool state, QWidget* parent);
    virtual ~Light();

public slots:
    void switchState();                    // Swith images ON/OFF (temporary)

private:
    QLabel* mLabelImg;                      // Label for text or image
    QPixmap* mPixmapImgON;                  // Image ON
    QPixmap* mPixmapImgOFF;                 // Image OFF
    std::string mName;                      // Name of Light

};

#endif // LIGHT_H
