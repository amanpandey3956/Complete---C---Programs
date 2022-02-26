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
    void show(Test x)
    {
        cout<< x.i << "\t" << x.j << endl;
    }
    friend void add(Test x);
};
void add(Test x)
{
    //cout<< x.i << "\t" << x.j << endl;
    //cout<< this->i << "\t" << this->j << endl;
    cout<< x.i << "\t" << x.j << endl;
}

int main()
{
    Test t1(10,20);
    Test t2(30,40);
    add(t2);

}
