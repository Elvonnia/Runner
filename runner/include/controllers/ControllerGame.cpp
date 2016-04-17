#include "ControllerGame.h"
using namespace std;


ControllerGame::~ControllerGame() {
    //dtor
}


bool ControllerGame::runGame() {
    field->createField();

    /*while(field->GetArrayField()[0] ){
        Sleep(500);
        field->changeField(field->createNewValue());
        ViewGame::changeFieldDataWithSprites(field->GetArrayField(), field->GetCharacter().GetJump());
        ViewGame::ShowView(field->GetCharacterLife().GetJump());
    }*/
    while(field->GetCharacterLife()){
        Sleep(500);
        field->changeField(field->createNewValue());
        ViewGame::changeFieldDataWithSprites(field->GetArrayField(), field->GetCharacterJump());
        ViewGame::ShowView(field->GetCharacterJump());
        if(field->GetArrayField()[0] ==1){
            field->SetCharacterLife(false);
        }
    }
    return false;
}

