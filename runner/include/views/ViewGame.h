#ifndef VIEWGAME_H
#define VIEWGAME_H
#include "../utils/ConfigViewGame.h"

class ViewGame
{
    public:
        /** Default constructor */
        ViewGame();
        /** Default destructor */
        ~ViewGame();
    protected:
    private:
        bool spaceKey;
        bool entryKey;
        bool escapeKey;

};

#endif // VIEWGAME_H
