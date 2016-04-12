#include <iostream>
#include "./controllers/ContollerMenu.h"
#include "./controllers/ControllerGame.h"

using namespace std;

int main( int argv,char** argc)
{
    ControllerMenu *contollerMenu = new ControllerMenu();
    ControllerGame *contollerGame = new ControllerGame();

    if(!contollerMenu->RunMenu()){
        if(ViewMenu::GetActualView() == 1){
            contollerGame->runGame();
        }
    }


}
