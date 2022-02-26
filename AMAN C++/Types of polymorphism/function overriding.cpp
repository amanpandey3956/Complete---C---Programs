#include<iostream>
using namespace std;
class A
{
public:
    void show()
    {
        cout<<"In A class"<<endl;
    }
};
class B:public A
{
    public:
     void show()
    {
        cout<<"In B class"<<endl;
    }
};
int main()
{
    B ob1;
    A *p;
    p=&ob1;
    p->show();
}
