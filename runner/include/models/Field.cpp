#include "./Field.h"
#include "../views/ViewGame.h"


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
    int random = rand() % 10 +1;
    if(random == 5){
        return 1;
    }
    else{
        return 0;
    }
}
