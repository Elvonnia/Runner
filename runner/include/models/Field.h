#ifndef FIELD_H
#define FIELD_H

#include "../utils/ConfigField.h"
#include "./Character.h"

class Field {
public:
    /** Default constructor */
    void createField();

    void changeField(int newValue);

    int createNewValue();

    int *GetArrayField(){
        return arrayField;
    }


    Character GetCharacter(){
        return *character;
    }

private:
    Character *character = new Character();
    int m_speed = ConfigField::speed();
    int arrayField[5];
};

#endif // FIELD_H
