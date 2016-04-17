#ifndef CONTROLLERGAME_H
#define CONTROLLERGAME_H

#include "ControllerUser.h"
#include "../models/Field.h"
#include <iostream>
#include <conio.h>
#include<stdio.h>
#include <windows.h>
#include <cstdlib>

class ControllerGame {
public:

    bool runGame();
    void clean();
    /** Default constructor */
    /** Default destructor */
    virtual ~ControllerGame();

protected:
private:
    double score;
    Field *field = new Field();

};

#endif // CONTROLLER_H
