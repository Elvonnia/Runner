#ifndef CONTROLLERGAME_H
#define CONTROLLERGAME_H

#include "../models/Field.h"

#include <iostream>
#include <windows.h>

class ControllerGame {
public:

    bool runGame();
    /** Default constructor */
    /** Default destructor */
    virtual ~ControllerGame();
    void checkIfGameOver() const;
    void keyEvent() const;

protected:
private:
    Field *field = new Field();
};

#endif // CONTROLLER_H
