#include "./Field.h"
#include "../views/ViewGame.h"
#include <iostream>

using namespace std;


void Field::createField() {
    for (int i = 0; i <= sizeof(arrayField); i++) {
        if(i ==  0){
            arrayField[i] = 2;
        }
        else{
            arrayField[i] = 0;
        }
     }
}

void Field::changeField(int newValue) {
    for(int i = 0; i<= sizeof(arrayField); i++){
        arrayField[i] = arrayField[i+1];
        if(i == sizeof(arrayField)){
            arrayField[i] = newValue;
        }
    }

}

int Field::createNewValue() {

}
