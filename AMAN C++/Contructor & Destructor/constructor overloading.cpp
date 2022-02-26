#include<iostream>
using namespace std;
class circle
{
private:
    float radius;
    float area;
public:
    //constructor with and without both
    //overloading
    circle(float r)
    {
        radius=r;
        cout<<"constructor with argument called!!!"<<endl;
    }
    circle()
    {
        radius=1.2;
        cout<<"constructor without argument called!!!"<<endl;
    }
    void calculatearea()
    {
        area=3.14*radius*radius;
        cout<<"area of circle: " << area <<endl;
    }
};
int main()
{
    circle ob1;
    circle ob2(3.4);
    ob1.calculatearea();
    ob2.calculatearea();


}
