#include "ControllerGame.h"
using namespace std;


ControllerGame::~ControllerGame() {
    //dtor
}


bool ControllerGame::runGame() {
    field->createField();
    /*ViewGame::changeFieldDataWithSprites(field->GetArrayField(), field->GetCharacter().GetJump());
    ViewGame::ShowView(field->GetCharacter().GetJump());*/
    /*while (field->GetCharacter().GetAlive()) {
        system("cls");
        if (ViewGame::KeyPressed() == 1) {
            field->GetCharacter().SetJump(true);
            ViewGame::changeFieldDataWithSprites(field->GetArrayField(), field->GetCharacter().GetJump());
            ViewGame::ShowView(field->GetCharacter().GetJump());
        }
        ViewGame::changeFieldDataWithSprites(field->GetArrayField(), field->GetCharacter().GetJump());
        ViewGame::ShowView(field->GetCharacter().GetJump());
        cout << field->GetCharacter().GetJump()<<endl;

    }*/
    while(field->GetArrayField()[0] != 1){
        Sleep(500);
        field->changeField(field->createNewValue());
        ViewGame::changeFieldDataWithSprites(field->GetArrayField(), field->GetCharacter().GetJump());
        ViewGame::ShowView(field->GetCharacter().GetJump());
    }
    return false;
}

