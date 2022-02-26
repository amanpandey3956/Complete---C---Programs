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
    Test()
    {
        i=0;
        j=0;
    }
    Test operator +(Test ob)
    {
        Test temp;
        temp.i=this->i+ob.i;
        temp.j=this->j+ob.j;
        cout<<"operator function called!!!"<<endl;
        return(temp);
    }
    void show()
    {
        cout<<i<<"\t"<<j<<endl;
    }
};
int main()
{
    Test t1(10,20);
    Test t2(30,40);
    Test t3;
    t3=t2+t1;
    t3.show();
}
