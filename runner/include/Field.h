#ifndef FIELD_H
#define FIELD_H
#include "../include/BaseControler.h"
#include "../include/ViewGame.h"

class Field: BaseControler
{
    public:
        /** Default constructor */
        Field();
        /** Default destructor */
        virtual ~Field();
        char createArrayline[10](char element1, char element2, char element3);

    protected:
    private:
        int m_widthFieldSize = 3;
        int m_lenghtFieldsize = 10;
        int m_speed = speed;
};

#endif // FIELD_H
