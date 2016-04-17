#include "./ViewGame.h"

using namespace std;
char ViewGame::character = ConfigViewGame::spriteChar();
char ViewGame::obstacle = ConfigViewGame::spriteObj();
char ViewGame::empty = ConfigViewGame::spriteEmpty();
char ViewGame::newArrayField[5];


void ViewGame::changeFieldDataWithSprites(int *arrayField, bool jumpCharacter) {
    for(int i = 0; i < sizeof(arrayField); i++){
        if(arrayField[i] == 2 && !jumpCharacter){
            newArrayField[i] = character;
        }else if(arrayField[i] == 1){
            newArrayField[i] = obstacle;
        }else{
            newArrayField[i] = empty;
        }
    }
}

void ViewGame::ShowView(bool jumpCharacter) {
    /*if(jumpCharacter){
        cout<< "JUMP" <<endl;
    }else{
        cout << " "<< endl;
    }*/
    system("cls");
    cout <<newArrayField[0] << newArrayField[1] << newArrayField[2] << newArrayField[3] << newArrayField[4] <<
    newArrayField[5] << endl;
}

int ViewGame::KeyPressed() {
    int key = getchar();
    if(key == 122){
        return 1;
    }
    return 0;
}

