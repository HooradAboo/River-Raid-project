#include "ship.h"



Ship::Ship(QGraphicsView *view)
{
    this->view = view ;
    this->health = 2 ;
    this->score = 2 ;
    this->speed = 0 ;
    int sceneWidth = 350; //this must be fixed!
    int randomX = (rand()% sceneWidth + 240) ;

    setPixmap(shipImage->scaled(40 , 40));

    setPos(randomX , 0) ;
//    }


    QTimer *timer = new QTimer() ;

    connect(timer ,SIGNAL(timeout()) , this , SLOT(move()) ) ;

    timer->start(25);

}
