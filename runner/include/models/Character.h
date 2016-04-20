#ifndef CHARACTER_H
#define CHARACTER_H

#include "../utils/ConfigChar.h"

class Character {
private:
    int m_posY;
    int m_posX;
    bool m_jump;
    bool m_alive;
    int m_score;

public:
    Character();
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

    long GetScore(){
        return m_score;
    }

    void SetScore(long score){
        m_score = score;
    }


};

#endif // CHARACTER_H
