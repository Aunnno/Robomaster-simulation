#include "../Roboclass/RoboClass.h"
#include "../Decisionclass/Decision.h"

class Robo_system
{
    public:
    Robo_system()
    {
        this->time=0;
    }
    public:
        int time;
        int **map;
        Robot *Robot_blue_home,*Robot_blue_s1,*Robot_blue_ep;
        Robot *Robot_red_home,*Robot_red_s1,*Robot_red_ep;
};