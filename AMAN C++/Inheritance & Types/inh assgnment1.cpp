#include<iostream>
using namespace std;
class Animal
{
public:
    void eat()
    {
        cout<<" Animals eat" <<endl;
    }
    void sleep()
    {
        cout<< "Animal sleeps"<<endl;
    }
};
class Bird:public Animal
{
public:
    void fly()
    {
        cout<<" birds fly :"<<endl;
    }
};
int main()
{
    Animal ob;
    ob.eat();
    ob.sleep();
    Bird ob2;
    ob2.fly();
}

