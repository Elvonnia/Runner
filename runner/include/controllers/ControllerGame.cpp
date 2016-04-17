#include "ControllerGame.h"
using namespace std;


ControllerGame::~ControllerGame() {
    //dtor
}


bool ControllerGame::runGame() {
    field->createField();

    /*while(field->GetCharacterLife()){
        Sleep(500);
        field->changeField(field->createNewValue());
        ViewGame::changeFieldDataWithSprites(field->GetArrayField(), field->GetCharacterJump());
        ViewGame::ShowView(field->GetCharacterJump());
        if(field->GetArrayField()[0] ==1){
            field->SetCharacterLife(false);
        }
    }*/

    while(field->GetCharacterLife()){
        Sleep(250);
        field->changeField(field->createNewValue());
        ViewGame::changeFieldDataWithSprites(field->GetArrayField(), field->GetCharacterJump());
        ViewGame::ShowView(field->GetCharacterJump());
        if(field->GetCharacterJump()){
            field->SetCharacterJump(false);
        }
        if(ViewGame::KeyPressed() == 1){
            field->SetCharacterJump(true);
        }
        if(field->GetArrayField()[0] ==1 && !field->GetCharacterJump()){
            field->SetCharacterLife(false);
        }
    }
    return false;
}

