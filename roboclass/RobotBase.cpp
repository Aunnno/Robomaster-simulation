
class Robot
{
    public:
        Robot(int x,int y,int blood,int colour,int num,int theta)
        {
            this->x=x;
            this->y=y;
            this->blood=blood;
            this->colour=colour;
            this->num=num;
            this->theta=theta;
            this->omega=0;
            this->h=0;
            this->v=0;
            this->sheild=0;
            this->decisions=new int[11];//[方向，前进距离，前进速度，旋转方向，旋转距离，旋转速度，射击，射击方向，射速，取弹,倒弹]
            for(int i=0;i<11;i++)
            decisions[i]=0;
        }
    public:
        virtual void gimbol_rotating()=0;
        virtual void chassis_rotating()=0;
        virtual void move()=0;
        virtual void shoot()=0;
        virtual void clamping()=0;
        virtual void pour()=0;
        virtual void decision()=0;
    public:
        int x,y,blood,toward,colour,omega,ammunition,num,theta,h,sheild;
        int* decisions;
        float v;
};