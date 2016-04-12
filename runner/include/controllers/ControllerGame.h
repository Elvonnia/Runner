#ifndef CONTROLLERGAME_H
#define CONTROLLERGAME_H

#include "ControllerUser.h"

class ControllerGame {
public:
    void createField();

    bool runGame();
    /** Default constructor */
    /** Default destructor */
    virtual ~ControllerGame();

protected:
private:
    double score;

};

#endif // CONTROLLER_H
