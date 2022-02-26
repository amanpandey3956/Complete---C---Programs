#include<iostream>
using namespace std;
class student
{
private:
    string first_name;
    string last_name;
    string major;
    int year;
public:
    void setfirstname(string n)
    {
        first_name=n;
    }
    string getfirstname()
    {
        return first_name;
    }
    void setlastname(string n)
    {
        last_name=n;
    }
    string getlastname()
    {
        return last_name;
    }
    void setmajor(string n)
    {
        major=n;
    }
    string getmajor()
    {
        return major;
    }
    void setyear(int x)
    {
        year=x;
    }
    int getyear()
    {
        return year;
    }
};
int main()
{
student s1;
s1.setfirstname("Aman");
s1.setlastname("Pandey");
s1.setmajor("ETC");
s1.setyear(2);
cout<<s1.getfirstname()<<endl;
cout<<s1.getlastname()<<endl;
cout<<s1.getmajor()<<endl;
cout<<s1.getyear()<<endl;
}
