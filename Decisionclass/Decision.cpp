class Decision
{
    public:
        Decision(int num,int colour,int work_time)
        {
            this->Robo_colour=colour;
            this->Robo_num=num;
            this->work_time=work_time;
            this->decisions=new int[13];//[0.方向，1.前进距离，2.前进速度，3.底盘旋转方向，4.底盘旋转角度，5.底盘旋转速度，6.云台旋转方向，7.云台旋转角度，8.云台旋转速度，9.射击，10.射速，11.取弹,12.倒弹]
            for(int i=0;i<11;i++) decisions[i]=-1000;//表示命令为空
        }
    public:
        int Robo_num;
        int Robo_colour;
        int work_time;
        int* decisions;
};