#ifndef VIEWGAME_H
#define VIEWGAME_H

#include <iostream>

#include "../utils/ConfigViewGame.h"
class ViewGame {
public:

    static void changeFieldDataWithSprites(char arrayField[], char arrayArea[]);

    static void ShowView();

private:
    static char character;
    static char obstacle;
    static char empty;
    static char newArrayField[5];
    static char newArrayArea[5];
};

#endif // VIEWGAME_H
