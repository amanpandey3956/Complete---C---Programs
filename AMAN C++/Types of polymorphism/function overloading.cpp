#include<iostream>
using namespace std;
class Test
{
public:
    void add(int x,int y)
    {
        cout<<"int addition is :"<<x+y<<endl;
    }
    void add(string x,string y)
    {
        cout<<"string addition is :"<<x+y<<endl;
    }
    void add(float x,float y)
    {
        cout<<"float addition is :"<<x+y<<endl;
    }
    void show()
    {
        cout<<"concat addition is:"<<endl;
    }
};
int main()
{
    Test ob;
    ob.show();
    ob.add(10,20);
    ob.add("hello","world");
    ob.add(1.2f,3.4f);

}

