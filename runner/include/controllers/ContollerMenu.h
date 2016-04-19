//
// Created by Guillaume on 03/04/2016.
//

#ifndef RUNNER_CONTROLLERMENU_H
#define RUNNER_CONTROLLERMENU_H

#include "../models/Menu.h"
#include <stdio.h>
#include <cstdlib>
#include <conio.h>



class ControllerMenu {
public:
    bool RunMenu();

private:
    Menu *menu = new Menu();
};


#endif //RUNNER_CONTROLLERMENU_H
