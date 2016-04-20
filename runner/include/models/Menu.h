//
// Created by Guillaume on 03/04/2016.
//

#ifndef RUNNER_MENU_H
#define RUNNER_MENU_H

#include "../views/ViewMenu.h"
#include <cstdlib>
using namespace std;


class Menu{
public:

    int GetHaveMakeAChoice(){
        return haveMakeAChoice;
    }

    void SetHaveMakeAChoise(bool value){
        haveMakeAChoice = value;
    }

    void viewToShow();


private:
    int haveMakeAChoice = false;
};


#endif //RUNNER_MENU_H
