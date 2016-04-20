//
// Created by Guillaume on 03/04/2016.
//

#ifndef RUNNER_VIEWMENU_H
#define RUNNER_VIEWMENU_H


#include <conio.h>
#include <iostream>
#include <stdio.h>
#include "../utils/ConfigViewMenu.h"

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_ENTER 13
#define KEY_LEFT 75

using namespace std;

class ViewMenu {
public:
    static int GetActualView(){
        return actualView;
    }

    static void defaultView();

    static void secondView();

    static void thirdView();

    static void HelpView();

    static int KeyPressed();

private:
    static string pointeur;
    static vector<string> options;
    static int actualView;


};


#endif //RUNNER_VIEWMENU_H
