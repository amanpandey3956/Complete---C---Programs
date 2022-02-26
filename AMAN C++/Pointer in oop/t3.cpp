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
    void add(Test x)
    {
        int a,b;
        a=x.i+this->i;
        a=x.j+this->j;
        cout << a << "\t" << b << endl;
    }
};
int main()
{
    Test t1(10,20);
    Test t2(30,40);
    t1.add(t2);
    t2.add(t1);
    cout<<"address of t2:"<<&t2<<endl;
     cout<<"address of t1:"<<&t1<<endl;


}

