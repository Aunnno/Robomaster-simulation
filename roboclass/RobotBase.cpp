#include "../Decisionclass/Decision.h"
#include<vector>
using namespace std;
class Robot
{
    public:
        Robot(int x,int y,int HP,int colour,int num,int theta)
        {
            this->x=x;
            this->y=y;
            this->HP=HP;
            this->colour=colour;
            this->num=num;
            this->theta=theta;
            this->omega=0;
            this->h=0;
            this->v=0;
            this->sheild=0;
            // this->decisions=new int[13];//[方向，前进距离，前进速度，底盘旋转方向，底盘旋转角度，底盘旋转速度，云台旋转方向，云台旋转角度，云台旋转速度，射击，射速，取弹,倒弹]
            // for(int i=0;i<11;i++)
            // decisions[i]=0;
        }
    public:
        virtual void gimbol_rotating(int rot_towards,int rot_theta,int rot_omega,int work_time)=0;
        virtual void chassis_rotating(int rot_towards,int rot_theta,int rot_omega,int work_time)=0;
        virtual void move(int mov_towards,int mov_v,int mov_s,int work_time)=0;
        virtual void shoot()=0;
        virtual void clamping()=0;
        virtual void pour()=0;
        virtual void decision()=0;
        int x,y,HP,toward,colour,omega,ammunition,num,theta,h,sheild;
        // int* decisions;
        vector<Decision> dec_list;
        float v;
};