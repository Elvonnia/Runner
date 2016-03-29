#ifndef DISPLAY_H
#define DISPLAY_H


class Display
{
    public:
        /** Default constructor */
        Display();
        /** Default destructor */
        virtual ~Display();
         char Getm_obstacle() { return m_obstacle; }
         char Getm_nobstacle() { return m_nobstacle; }
         char Getm_borderlines() { return m_borderlines; }

    protected:
    private:
        char m_obstacle = 'O' ;
        char m_nobstacle = ' ' ;
        char m_borderlines = '|';

};

#endif // DISPLAY_H
