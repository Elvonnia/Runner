#ifndef CHARACTER_H
#define CHARACTER_H
#include "ConfigChar.h"
#include "ViewGame.h"

class Character
{
    protected:
    private:
        int m_posY; //!< Member variable "m_posY"
        int m_posX; //!< Member variable "m_posX"
        bool m_jump; //!< Member variable "m_jump"
        bool m_alive;

    public:
        /** Default constructor */
        Character();
        /** Default destructor */
        virtual ~Character();
        /** Access m_posY
         * \return The current value of m_posY
         */
        int Getm_posY() { return m_posY; }
        /** Set m_posY
         * \param val New value to set
         */
        void Setm_posY(int val) { m_posY = val; }
        /** Access m_posX
         * \return The current value of m_posX
         */
        int Getm_posX() { return m_posX; }
        /** Set m_posX
         * \param val New value to set
         */
        void Setm_posX(int val) { m_posX = val; }
        /** Access m_jump
         * \return The current value of m_jump
         */
        bool Getm_jump() { return m_jump; }
        /** Set m_jump
         * \param val New value to set
         */
        void Setm_jump(bool val) { m_jump = val; }
        /** Access m_sprite
         * \return The current value of m_sprite
         */
};

#endif // CHARACTER_H
