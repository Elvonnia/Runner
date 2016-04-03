#ifndef CONTROLERGAME_H
#define CONTROLERGAME_H
#include "./ControlerUser.h"

class ControlerGame {
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
