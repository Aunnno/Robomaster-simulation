class Decision
{
    public:
        Decision(int num,int colour)
        {
            this->Robo_colour=colour;
            this->Robo_num=num;
            this->decisions=new int[11];//[方向，前进距离，前进速度，旋转方向，旋转距离，旋转速度，射击，射击方向，射速，取弹,倒弹]
            for(int i=0;i<11;i++) decisions[i]=0;
        }
    public:
        int Robo_num;
        int Robo_colour;
        int* decisions;
};