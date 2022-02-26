#include<iostream>
using namespace std;
class A
{
public:
    //abstract function
    //pure virtual function
    virtual void show()=0;

};
class B:public A
{
public:
    void show()
    {
        cout<<"In B class"<<endl;
    }
};
class C:public B
{
public:
    void show()
    {
        cout<<"In C class"<<endl;
    }
};
int main()
{
    B ob2;
    C ob3;
    A *p;

    p=&ob2;
    p->show();
    p=&ob3;
    p->show();
}

