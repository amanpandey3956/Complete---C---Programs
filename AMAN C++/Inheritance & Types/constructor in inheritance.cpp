#include<iostream>
using namespace std;
class A
{
int i;
public:
A()
{
    cout<<"In A"<<endl;
    i=10;
}
int getI()
{
    return i;
}
};
class B:public A
{
    int j;
public:
    B()
    {
        int x=getI();
        j=x*x;
        cout<<"In B" << endl;
    }
    void add()
    {
        cout<<getI()+j<<endl;
    }
};
int main()
{
    B ob;
    ob.add();

}
