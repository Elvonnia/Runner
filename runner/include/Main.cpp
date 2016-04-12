#include <iostream>
#include "./controllers/ContollerMenu.h"

using namespace std;

int main( int argv,char** argc)
{
    ControllerMenu *contollerMenu = new ControllerMenu();

    contollerMenu->RunMenu();


}
