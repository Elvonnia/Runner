#ifndef CONTROLLERGAME_H
#define CONTROLLERGAME_H

#include "ControllerUser.h"
#include "../models/Field.h"
#include <iostream>

class ControllerGame {
public:

    bool runGame();
    /** Default constructor */
    /** Default destructor */
    virtual ~ControllerGame();

protected:
private:
    double score;
    Field *field = new Field();

};

#endif // CONTROLLER_H
