#include<iostream>
using namespace std;
class Test
{
private:
    int i,j;
public:
    Test(int x,int y)
    {
        i=x;
        j=y;
    }
    void add(Test & x)
    {
        cout<<"Address of parameter x: "<<&x<<endl;
    }
};
int main()
{
    Test t1(10,20);
    Test t2(30,40);
    t1.add(t2);
    cout<<"Address of t2 : "<<&t2<<endl;
}
