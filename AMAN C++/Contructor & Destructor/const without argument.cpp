#include<iostream>
using namespace std;
class circle
{
private:
    float radius;
    float area;
public:
    circle()
    {
        cout<<"constructor without argument called!!!"<<endl;
        cout<<"Enter radius of circle :"<<endl;
        cin>>radius;
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
    ob1.calculatearea();
    circle ob2;
    ob2.calculatearea();
    circle ob3;
    ob3.calculatearea();
}
