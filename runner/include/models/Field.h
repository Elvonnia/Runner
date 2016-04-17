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


    Character GetCharacter(){
        return *character;
    }

private:
    Character *character = new Character();
    int speed;
    int* arrayField = new int[ConfigSizeField::sizeOfField()];
};

#endif // FIELD_H
