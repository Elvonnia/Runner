//
// Created by Guillaume on 03/04/2016.
//
#include "ContollerMenu.h"

bool ControllerMenu::RunMenu() {
    ViewMenu::defaultView();
    while (!menu->GetHaveMakeAChoice()) {
        menu->viewToShow();
    }
    if (ViewMenu::GetActualView() == 2) {
        system("cls");
        ViewMenu::HelpView();
        while(ViewMenu::KeyPressed() != 3);
        system("cls");
        menu->SetHaveMakeAChoise(false);
        RunMenu();
    }

    return false;

}
