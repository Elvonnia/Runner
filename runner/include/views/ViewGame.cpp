#include "./ViewGame.h"

using namespace std;
char ViewGame::character = ConfigViewGame::spriteChar();
char ViewGame::obstacle = ConfigViewGame::spriteObj();
char ViewGame::empty = ConfigViewGame::spriteEmpty();
char ViewGame::newArrayArea[5];
char ViewGame::newArrayField[5];


void ViewGame::changeFieldDataWithSprites(char *arrayField, char *arrayArea) {
    for(int i = 0; i< sizeof(arrayArea); i++){
        if(arrayArea[i] == 2){
            newArrayArea[i] = character;
        }else if(arrayArea[i] == 1){
            newArrayArea[i] = obstacle;
        }else{
            newArrayArea[i] = empty;
        }
    }
    for(int i = 0; i < sizeof(arrayField); i++){
        if(arrayField[i] == 2){
            newArrayField[i] = character;
        }else if(arrayField[i] == 1){
            newArrayField[i] = obstacle;
        }else{
            newArrayField[i] = empty;
        }
    }

}

void ViewGame::ShowView() {
    cout << newArrayArea[0] << newArrayArea[1] << newArrayArea[2] << newArrayArea[3] << newArrayArea[4] <<
    newArrayArea[5] << endl;
    cout << newArrayField[0] << newArrayField[1] << newArrayField[2] << newArrayField[3] << newArrayField[4] <<
    newArrayField[5] << endl;
}

