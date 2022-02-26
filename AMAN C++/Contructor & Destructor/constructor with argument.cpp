#include<iostream>
using namespace std;
class circle
{
private:
    float radius;
    float area;
public:
    circle(float r)
    {
        radius=r;
        cout<<"constructor with argument called!!!"<<endl;
    }
    void calculatearea()
    {
        area=3.14*radius*radius;
        cout<<"area of circle: " << area <<endl;
    }
};
int main()
{
    circle ob1(1.2);
    circle ob2(2.3);
    circle ob3(3.4);
    ob1.calculatearea();
    ob2.calculatearea();
    ob3.calculatearea();
}
