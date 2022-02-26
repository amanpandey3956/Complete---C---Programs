#include<iostream>
using namespace std;
class person
{
private:
    string name;
    int phone;
public:
    void setname(string x)
    {
       name=x;
    }
    string getname()
    {
        return name;
    }
     void setphone(int x)
    {
        phone=x;
    }
    int getphone()
    {
        return phone;
    }
};
class student:public person
{
private:
    int id;
    string branch;
public:
    void setid(int x)
    {
        id=x;
    }
    int getid()
    {
        return id;
    }
     void setbranch(string x)
    {
        branch=x;
    }
    string getbranch()
    {
        return branch;
    }
};
class teacher:public person
{
private:
    string dept;
    int salary;
public:
    void setdept(string x)
    {
        dept=x;
    }
    string getdept()
    {
        return dept;
    }
     void setsalary(int x)
    {
        salary=x;
    }
    int getsalary()
    {
        return salary;
    }
};
int main()
{
    student s1;
    s1.setname("VISHAL");
    s1.setphone(738);
    s1.setid(123);
    s1.setbranch("etc");
    teacher s2;
     s2.setname("AMAN");
    s2.setphone(973);
     s2.setsalary(10000);
    s2.setdept("science");
    cout<<s1.getid()<<"\t"<<s1.getbranch()<<"\t"<<s1.getname()<<"\t"<<s1.getphone()<<endl;
     cout<<s2.getsalary()<<"\t"<<s2.getdept()<<"\t"<<s2.getname()<<"\t"<<s2.getphone()<<endl;

}


