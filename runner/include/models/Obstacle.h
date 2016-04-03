#ifndef OBSTACLE_H
#define OBSTACLE_H

#include "../utils/ConfigObj.h"

class Obstacle {
public:
    /** Default constructor */
    Obstacle();

    /** Default destructor */
    virtual ~Obstacle();

private:
    int m_posX = objPosX;
};

#endif // OBSTACLE_H
