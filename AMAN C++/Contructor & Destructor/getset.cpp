#include<iostream>
using namespace std;
class circle
{
private:
    float radius;
public:
    //getter and setter function
    void setRadius(float x)
    {
        radius=x;
    }
    float getRadius()
    {
        return radius;
    }
};
int main()
{
    circle ob1;
    ob1.setRadius(1.2);
    float p;
    p=ob1.getRadius();
    circle ob2;
    ob2.setRadius(3.4);
    float q;
    q=ob2.getRadius();
    cout<<"object 1\t"<<p<<endl;
    cout<<"object 2\t"<<q<<endl;
    return 0;
}
