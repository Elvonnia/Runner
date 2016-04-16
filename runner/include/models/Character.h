#ifndef CHARACTER_H
#define CHARACTER_H

#include "../utils/ConfigChar.h"

class Character {
private:
    int m_posY;
    int m_posX;
    bool m_jump = false;
    bool m_alive = true;

public:
    bool GetAlive() {
        return m_alive;
    }

    void SetAlive(bool alive){
        m_alive = alive;
    }

    bool GetJump(){
        return m_jump;
    };

    void SetJump(bool jump){
        m_jump = jump;
    };


};

#endif // CHARACTER_H
