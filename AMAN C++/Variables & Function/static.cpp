#include<iostream>
using namespace std;
class Test
{
private:
    int i=0;
    static int j;
public:
    Test()
    {
        i++;
        j++;
    }
    void show()
    {
        cout<< i <<"\t"<<j<<endl;
    }
};
//static declaration
//datatype classname::variable;
int Test::j;
int main()
{
    Test t1;
    Test t2;
    Test t3;
    t1.show();
    t2.show();
    t3.show();

}
