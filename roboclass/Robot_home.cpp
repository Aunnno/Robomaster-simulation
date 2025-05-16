#include "./RobotBase.h"
#include<iostream>
class Robot_home:public Robot
{
    public:
    void gimbol_rotating(int rot_towards,int rot_theta=0,int rot_omega=2,int work_time=0)
    {
        cout<<"ERROR:该函数对基地无效";
    }
    void chassis_rotating(int rot_towards,int rot_theta,int rot_omega,int work_time)
    {
        cout<<"ERROR:该函数对基地无效";
    }
    void move(int mov_towards,int mov_s,int mov_v,int work_time)
    {
        cout<<"ERROR:该函数对基地无效";
    }
    void shoot(int work_time)
    {
        cout<<"ERROR:该函数对基地无效";
    }
    void clamping(int work_time)
    {
        cout<<"ERROR:该函数对基地无效";
    }
    void pour(int work_time)
    {
        cout<<"ERROR:该函数对基地无效";
    }
};