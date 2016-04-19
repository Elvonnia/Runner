#ifndef CONTROLLERGAME_H
#define CONTROLLERGAME_H

#include "ControllerUser.h"
#include "../models/Field.h"

#include <iostream>
#include <windows.h>

class ControllerGame {
public:

    bool runGame();
    /** Default constructor */
    /** Default destructor */
    virtual ~ControllerGame();
    void GameOver() const;

protected:
private:
    double score;
    Field *field = new Field();


};

#endif // CONTROLLER_H
