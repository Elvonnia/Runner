#ifndef FIELD_H
#define FIELD_H

#include "../utils/ConfigField.h"
#include "../utils/ConfigSizeField.h"
#include "./Character.h"

#include "stdlib.h"
#include "../views/ViewGame.h"
#include <stdio.h>
#include <iostream>

class Field {
public:
    /** Default constructor */
    void createField();

    void changeField(int newValue);

    int createNewValue();

    int *GetArrayField(){
        return arrayField;
    }

    int GetSpeed(){
        return speed;
    }


    bool GetCharacterLife(){
        return character->GetAlive();
    }

    void SetCharacterLife(bool value){
        character->SetAlive(value);
    }

    bool GetCharacterJump(){
        return character->GetJump();
    }

    void SetCharacterJump(bool value){
        character->SetJump(value);
    }

private:
    Character *character = new Character();
    int speed;
    int* arrayField = new int[ConfigSizeField::sizeOfField()];
};

#endif // FIELD_H
