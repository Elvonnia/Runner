//
// Created by Guillaume on 03/04/2016.
//
using namespace std;
#include "Menu.h"

void Menu::viewToShow() {
    int actualView = ViewMenu::GetActualView();
    int KeyPressed = ViewMenu::KeyPressed();
    if (KeyPressed != 2) {
        int viewToShow = actualView + KeyPressed;
        if (viewToShow == 1) {
            system("cls");
            ViewMenu::defaultView();
        } else if (viewToShow == 2) {
            system("cls");
            ViewMenu::secondView();
        }
        else if (viewToShow == 3) {
            system("cls");
            ViewMenu::thirdView();
        }
    }else{
        haveMakeAChoice = true;
    }
}


