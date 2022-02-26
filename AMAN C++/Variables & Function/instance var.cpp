#include<iostream>
using namespace std;
class Test
{
private:
    int i=0;
public:
    Test()
    {
        i++;
    }
    void show()
    {
        cout<< i << endl;
    }
};
int main()
{
    Test t1;
    Test t2;
    Test t3;
    t1.show();
    t2.show();
    t3.show();

}
