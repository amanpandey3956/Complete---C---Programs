#include<iostream>
using namespace std;
class complex
{
private:
    float real,img;

public:
    complex(int x,int y)
    {
        real=x;
        img=y;
    }
    complex()
    {
        real=0;
        img=0;
    }
    complex operator +(complex ob)
    {
        complex temp ;
        temp.real=this->real+ob.real;
        temp.img=this->img+ob.img;
        cout<<"operator function called!!!"<<endl;
        return(temp);
    }
    void show()
    {
        cout<<real<<"+i"<<img<<endl;
    }
};
int main()
{
    complex t1(10,20);
    complex t2(30,40);
    complex t3;
    t3=t2+t1;
    t3.show();
}

