#ifndef FIELD_H
#define FIELD_H

#include "../utils/ConfigField.h"

class Field {
public:
    /** Default constructor */
    Field();

    /** Default destructor */
    virtual ~Field();

    //char createArrayline[10](char element1, char element2, char element3);

protected:
private:

    int m_widthFieldSize = 3;
    int m_lenghtFieldsize = 10;
    int m_speed = ConfigField::speed();
};

#endif // FIELD_H
