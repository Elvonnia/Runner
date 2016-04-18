#include "ControllerGame.h"

using namespace std;


ControllerGame::~ControllerGame() {
    //dtor
}


bool ControllerGame::runGame() {
    field->createField();

    while (field->GetCharacterLife()) {
        Sleep(300);
        field->changeField(field->createNewValue());
        ViewGame::changeFieldDataWithSprites(field->GetArrayField(), field->GetCharacterJump());
        ViewGame::ShowView(field->GetCharacterJump());

        if(ViewGame::KeyPressed(field->GetCharacterJump()) == 1){
            field->SetCharacterJump(true);
            field->SetArrayField(0);
        }else{
            field->SetCharacterJump(false);
        }
        if (field->GetArrayField()[0] == 1 && !field->GetCharacterJump()) {
            field->SetCharacterLife(false);
        }
    }
    return false;
}

