#ifndef VIEWGAME_H
#define VIEWGAME_H

#include "../utils/ConfigViewGame.h"
#include "../utils/ConfigSizeField.h"
#include <conio.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

class ViewGame {
public:
    static void changeFieldDataWithSprites(int arrayField[], bool jumpCharacter);

    static void ShowView(bool jumpCharacter, long score);

    static void ShowViewGameOver();

    static void ShowViewStop();

    static int KeyPressed(bool jump);


private:
    static char character;
    static char deadCharacter;
    static char character2;
    static char obstacle;
    static char empty;
    static char *newArrayField;
};

#endif // VIEWGAME_H
