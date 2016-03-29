#ifndef CONTROLER_H
#define CONTROLER_H
#include "BaseControler.h"
#include "ControlerUser.h"
#include "ControlerGame.h"

class ControlerGame: public BaseControler
{
    public:
        createField();
        /** Default constructor */
        Controler();
        /** Default destructor */
        virtual ~Controler();
    protected:
    private:
        double score;

};

#endif // CONTROLER_H
