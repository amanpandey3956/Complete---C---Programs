#include<iostream>
using namespace std;
class A
{
private:
    void one()
    {
        cout<<"In private"<<endl;
    }
protected:
    void two()
    {
        cout<<"In protected"<<endl;
    }
public:
    void three()
    {
        cout<<"In public"<<endl;
    }

};
class B:public A
{
public:
    void disp()
    {
        cout<<"In derived class"<<endl;
        three();
        two();
        //one();
    }
};
int main()
{
    B ob1;
    ob1.disp();

}
