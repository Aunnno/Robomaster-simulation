#include "./RobotBase.h"
class Robot_ep:public Robot
{
    public:
        void gimbol_rotating(int rot_toward)
        {
            Decision* dec=new Decision(this->num,this->colour);
            dec->decisions[3]=rot_toward;
        }
};