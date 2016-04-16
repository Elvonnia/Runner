#ifndef VIEWGAME_H
#define VIEWGAME_H

#include <iostream>

#include "../utils/ConfigViewGame.h"

class ViewGame {
public:

    static void changeFieldDataWithSprites(int arrayField[], bool jumpCharacter);

    static void ShowView(bool jumpCharacter);

    static char GetCharacter(){
        return character;
    }

    static char GetObstacle(){
        return obstacle;
    }

    static char GetEmpty(){
        return empty;
    };

    static int KeyPressed();


private:
    static char character;
    static char obstacle;
    static char empty;
    static char newArrayField[5];
};

#endif // VIEWGAME_H
