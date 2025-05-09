#include "./RobotBase.h"
#include<iostream>
class Robot_ep:public Robot
{
    public:
        void gimbol_rotating(int rot_towards,int rot_theta=0,int rot_omega=2,int work_time=0)
        {
            Decision* dec=new Decision(this->num,this->colour,work_time);
            dec->decisions[3]=rot_towards;
            dec->decisions[4]=rot_theta;
            dec->decisions[5]=rot_omega;
            this->dec_list.push_back(*dec);
        }
        void chassis_rotating(int rot_towards,int rot_theta,int rot_omega,int work_time)
        {
            Decision* dec=new Decision(this->num,this->colour,work_time);
            dec->decisions[6]=rot_towards;
            dec->decisions[7]=rot_theta;
            dec->decisions[8]=rot_omega;
            this->dec_list.push_back(*dec);
        }
        void move(int mov_towards,int mov_s,int mov_v,int work_time)
        {
            Decision* dec=new Decision(this->num,this->colour,work_time);
            dec->decisions[0]=mov_towards;
            dec->decisions[1]=mov_s;
            dec->decisions[2]=mov_v;
            this->dec_list.push_back(*dec);
        }
        void shoot(int work_time)
        {
            cout<<"ERROR:ep机器人中shoot()函数为空"<<endl;
        }
        void clamping(int work_time)
        {
            Decision* dec=new Decision(this->num,this->colour,work_time);
            dec->decisions[11]=1;
        }
        void pour(int work_time)
        {
            Decision* dec=new Decision(this->num,this->colour,work_time);
            dec->decisions[12]=1;
        }
        
};