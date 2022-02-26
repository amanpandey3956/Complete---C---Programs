#include<iostream>
using namespace std;
class A
{
private:
int i;
public:
A()
{
    cout<<"constructor without args"<<endl;
    i=10;
}
A(int y)
{
    cout<<"constructor with args"<<endl;
    i=y;
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
    B(int p,int q):A(p)
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
    B ob(30,40);
    ob.add();

}
