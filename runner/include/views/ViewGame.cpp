#include "./ViewGame.h"

using namespace std;
char ViewGame::character = ConfigViewGame::spriteChar();
char ViewGame::character2 = ConfigViewGame::spriteChar2();
char ViewGame::deadCharacter = ConfigViewGame::spriteDeadCharacter();
char ViewGame::obstacle = ConfigViewGame::spriteObj();
char ViewGame::empty = ConfigViewGame::spriteEmpty();
char *ViewGame::newArrayField = new char[ConfigSizeField::sizeOfField()];


void ViewGame::changeFieldDataWithSprites(int arrayField[], bool jumpCharacter) {

    for (int i = 0; i < ConfigSizeField::sizeOfField(); i++) {
        if (arrayField[i] == 2 && !jumpCharacter) {
            if (newArrayField[i] == character2) {
                newArrayField[i] = character;
            } else {
                newArrayField[i] = character2;
            }

        } else if (arrayField[0] == 1 && !jumpCharacter) {
            newArrayField[0] = deadCharacter;
        } else if (arrayField[i] == 1) {
            newArrayField[i] = obstacle;
        } else {
            newArrayField[i] = empty;
        }
    }
}

void ViewGame::ShowView(bool jumpCharacter, long score) {
    system("cls");
    if (jumpCharacter) {
        cout << ' '<< character << endl;
    } else {
        cout << ' ' << endl;
    }

    string field = "";
    for (int i = 0; i < ConfigSizeField::sizeOfField(); i++) {
        field += newArrayField[i];
    }
    cout << field << endl<<endl;
    cout << score << " meter"<< endl <<endl;
}

void ViewGame::ShowViewGameOver() {
    cout << "press any key to continue"<< endl;
}

int ViewGame::KeyPressed(bool jump) {

    if(kbhit()){
        if (getch() == 32 && !jump) {
            return 1;
        }else{
            return 0;
        }
    }
    return 0;

}

