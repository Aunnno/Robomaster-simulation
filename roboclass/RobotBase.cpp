
class Robot
{
public:
    virtual void gimbol_rotating()=0;
public:
    int x,y,blood,toward,colour,omega,ammunition,num,theta,h;
    int* decisions;
    float v;
};