#include "./Character.h"
#include <iostream>
using namespace std;


/*int Character::m_posY = ConfigChar::charPosY();
int Character::m_posX = ConfigChar::charPosX();*/

Character::Character() {
    m_alive = true;
    m_jump = false;
    m_score = 0;
}