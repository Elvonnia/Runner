#include <iostream>
#include "./controllers/ContollerMenu.h"
#include "controllers/ControllerGame.h"

using namespace std;

int main( int argv,char** argc)
{
    ControllerMenu *controllerMenu = new ControllerMenu();
    ControllerGame *controllerGame = new ControllerGame();

    if(!controllerMenu->RunMenu()){
        if(ViewMenu::GetActualView() == 1){
            controllerGame->runGame();
        }
    }



}
