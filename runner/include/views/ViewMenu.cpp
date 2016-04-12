//
// Created by Guillaume on 03/04/2016.
//

#include "ViewMenu.h"

string ViewMenu::pointeur = ConfigViewMenu::pointeur();
vector<string> ViewMenu::options = ConfigViewMenu::options();
int ViewMenu::actualView = 1;

void ViewMenu::defaultView() {
    cout << pointeur << " " << options[0] << endl;
    cout << options[1] << endl;
    cout << options[2] << endl;
    actualView = 1;
}

void ViewMenu::secondView() {
    cout<< options[0] << endl;
    cout << pointeur << " " << options[1] << endl;
    cout << options[2] << endl;
    actualView = 2;
}

void ViewMenu::thirdView() {
    cout << options[0] << endl;
    cout << options[1] << endl;
    cout << pointeur << " " << options[2] << endl;
    actualView = 3;
}

int ViewMenu::KeyPressed() {
    int key = getchar();
    if(key == KEY_UP){
        return -1;
    }else if(key == KEY_DOWN){
        return 1;
    }else if (key == KEY_ENTER){
        return 2;
    }
}
