#include <time.h>
#include "./Field.h"

using namespace std;

void Field::createField() {
    srand(time(NULL));//initialise le rand pour la fonction createNewValue()
    for (int i = 0; i < ConfigSizeField::sizeOfField(); i++) {
        if (i == 0) {
            arrayField[i] = 2;
        }
        else {
            arrayField[i] = 0;
        }
    }
}

void Field::changeField(int newValue) {
    for (int i = 0; i < ConfigSizeField::sizeOfField(); i++) {
        arrayField[i] = arrayField[i + 1];
        if (character->GetJump()) {
            arrayField[3] = 2;
        }
        if (arrayField[0] != 1) {
            arrayField[0] = 2;
        }

        if (i == ConfigSizeField::sizeOfField() - 1) {
            if(arrayField[i -1] == 1 || arrayField[i-2] == 1 || arrayField[i-3] == 1){
                arrayField[i] = 0;
            }else{
                arrayField[i] = newValue;
            }
        }
    }
}

int Field::createNewValue() {

    int random = rand() % 10 + 1;
    cout<<random<<endl;
    if (random == 5) {
        cout <<"YOOOO"<<endl;
        return 1;
    } else {
        cout<<"OOOYYYY"<<endl;
        return 0;
    }
}
