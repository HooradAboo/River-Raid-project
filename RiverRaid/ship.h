#ifndef SHIP_H
#define SHIP_H

#include "enemy.h"
#include <cstdlib>
#include <QTimer>
#include <QObject>
#include <QPixmap>
#include <QGraphicsPixmapItem>

class Ship : public Enemy
{
public:
    Ship(QGraphicsView* view);
};

#endif // SHIP_H
