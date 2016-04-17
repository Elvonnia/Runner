#ifndef FIELD_H
#define FIELD_H

#include "../utils/ConfigField.h"
#include "./Character.h"
#include "stdlib.h"
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
    int arrayField[5];
};

#endif // FIELD_H
