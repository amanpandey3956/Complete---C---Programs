#include<iostream>
using namespace std;
template <class T,class V>
class Test
{
private:
    T i;
    V j;
public:
    Test(T x,V y)
    {
        i=x;
        j=y;
    }
    void show()
    {
        cout<<i<<"\t"<<j<<endl;
    }
};
int main()
{
    Test<string,int> t1("AMAN",200);
    t1.show();
}
