//
// Created by Guillaume on 03/04/2016.
//
#include "ContollerMenu.h"

bool ControllerMenu::RunMenu() {
    ViewMenu::defaultView();
    while (!menu->GetHaveMakeAChoice()){
        menu -> viewToShow();
    }
    return false;

}
