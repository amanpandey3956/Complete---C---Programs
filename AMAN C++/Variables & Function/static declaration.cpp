#include <iostream>
using namespace std;
class Test
{
private:
    int i = 0;  //instant
    static int j;  //static
public:
    Test()
    {
        i++;
        j++;
    }
    void show()
    {
        cout << i<<"\t"<<j << endl;
    }
    static void disp()
    {
        cout <<j<< endl;
    }

  static  bool isEven(int x)
    {
        bool f=false;
        if(x%2==0)
        {
           f=true;
        }
        return f;
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
    Test::disp();
    t1.show();
    t2.show();
    t3.show();
    bool f=Test::isEven(19);
    if(f==true)
    {
        cout<<"Even";
    }
    else
    {
        cout<<"Odd";
    }
    return 0;
}

