#include<iostream>
using namespace std;
class Test
{
public:
    void show()
    {
        cout<<"Hello world"<<endl;
    }
    void disp();
    void add(int x,int y);
};
void Test::disp()
{
    cout<<"outside of class"<<endl;
}
void Test::add(int x,int y)
{
    cout<<"Addition is "<<x+y<<endl;
}
int main()
{
    Test t1;
    t1.show();
    t1.disp();
    t1.add(100,200);
}
