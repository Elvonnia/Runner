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
        ViewGame::ShowView(field->GetCharacterJump(), field->GetCharacterScore());
        checkIfGameOver();
        keyEvent();
        field->SetCharacterScore(field->GetCharacterScore() + 2);

    }
    return false;
}

void ControllerGame::keyEvent() const {
    if (ViewGame::KeyPressed() == 1 && !field->GetCharacterJump()) {
        field->SetCharacterJump(true);
        field->SetArrayField(0);

    } else {
        field->SetCharacterJump(false);
    }
}

void ControllerGame::checkIfGameOver() const {
    if (field->GetArrayField()[0] == 1 && !field->GetCharacterJump()) {
        field->SetCharacterLife(false);
        ViewGame::ShowViewGameOver();
        while (getch() == 32);
    }
}

