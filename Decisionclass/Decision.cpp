class Decision
{
    public:
        Decision(int num,int colour)
        {
            this->Robo_colour=colour;
            this->Robo_num=num;
            this->decisions=new int[11];//[0.方向，1.前进距离，2.前进速度，3.旋转方向，4.旋转距离，5.旋转速度，6.射击，7.射击方向，8.射速，9.取弹,10.倒弹]
            for(int i=0;i<11;i++) decisions[i]=0;
        }
    public:
        int Robo_num;
        int Robo_colour;
        int* decisions;
};