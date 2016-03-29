#ifndef OBSTACLE_H
#define OBSTACLE_H
#include "ConfigObj.h"
#include "ViewGame.h"

class Obstacle
{
    public:
        /** Default constructor */
        Obstacle();
        /** Default destructor */
        virtual ~Obstacle();
    protected:
    private:
        int posX = ConfigObj.posx;
        int sizeX;
        int sizeY;
};

#endif // OBSTACLE_H
