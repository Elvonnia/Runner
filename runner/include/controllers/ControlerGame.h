#ifndef CONTROLERGAME_H
#define CONTROLERGAME_H
#include "../include/BaseControler.h"
#include "../include/ControlerUser.h"

class ControlerGame: public BaseControler
{
    public:
        void createField();
        /** Default constructor */
        ControlerGame();
        /** Default destructor */
        virtual ~ControlerGame();
    protected:
    private:
        double score;

};

#endif // CONTROLER_H
