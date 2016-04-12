#ifndef CHARACTER_H
#define CHARACTER_H

#include "../utils/ConfigChar.h"

class Character
{
    private:
        int m_posY = ConfigChar::charPosY();
        int m_posX = ConfigChar::charPosX();
        bool m_jump;
        bool m_alive;

    public:
        /** Default constructor */
        Character();
        /** Default destructor */
        virtual ~Character();

        int Getm_posY() { return m_posY; }

        void Setm_posY(int val) { m_posY = val; }

        int Getm_posX() { return m_posX; }

        void Setm_posX(int val) { m_posX = val; }

        bool Getm_jump() { return m_jump; }

        void Setm_jump(bool val) { m_jump = val; }

};

#endif // CHARACTER_H
