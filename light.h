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
    void switchPixmap();

private:
    QLabel* mLabelImg;
    QPixmap* mPixmapImgON;
    QPixmap* mPixmapImgOFF;

};

#endif // LIGHT_H
