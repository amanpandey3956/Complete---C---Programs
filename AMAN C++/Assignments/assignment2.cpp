#include<iostream>
using namespace std;
class Planet
{
private:
    string name;
    float distance;
    float gravity;
public:
     void setname(string n)
    {
        name=n;
    }
    string getname()
    {
        return name;
    }
    void setdistance(float n)
    {
        distance=n;
    }
    float getdistance()
    {
        return distance;
    }
    void setgravity(float n)
    {
        gravity=n;
    }
    float getgravity()
    {
        return gravity;
    }

};
int main()
{
Planet p1;
p1.setname("Earth");
p1.setdistance(10000);
p1.setgravity(9.8);
cout<<p1.getname()<<endl;
cout<<p1.getdistance()<<endl;
cout<<p1.getgravity()<<endl;
}
