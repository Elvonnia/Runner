#include <iostream>
#include "./controllers/ContollerMenu.h"
#include "controllers/ControllerGame.h"
void RunRunner();

using namespace std;

int main( int argv,char** argc)
{
    RunRunner();
}

void RunRunner() {
    ControllerMenu *controllerMenu = new ControllerMenu();
    ControllerGame *controllerGame = new ControllerGame();

    if(!controllerMenu->RunMenu()){
        if(ViewMenu::GetActualView() == 1){
            if(!controllerGame->runGame()){
                system("cls");
                RunRunner();
            }
        }
    }
}
