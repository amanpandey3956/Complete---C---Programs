#include<iostream>
using namespace std;
class student
{
private:
    int id;
    string name;
public:
    void setid(int x)
    {
        id=x;
    }
    int getid()
    {
        return id;
    }
    void setname(string n)
    {
        name=n;
    }
    string getname()
    {
        return name;
    }
};
class mark:virtual public student
{
private:
    int m1,m2;
public:
    void setm1(int y)
    {
        m1=y;
    }
    int getm1()
    {
        return m1;
    }
    void setm2(int y)
    {
        m2=y;
    }
    int getm2()
    {
        return m2;
    }
};
class sport:virtual public student
{
private:
    string grade;
public:
    void setgrade(string x)
    {
        grade=x;
    }
    string getgrade()
    {
        return grade;
    }
};
  class result:public mark,public sport
  {
  private:
    int avg;
  public:
    void showresult()
    {
        avg=(getm1()+getm2())/2;
        cout<<"personal information :"<<"\t"<<endl;
        cout<< getid()<<"\t" << getname() <<"\t"<<endl;
        cout<<"Average marks :"<<avg<<"\t"<<endl;
        cout<<"Grade is :"<<"\t"<<endl;
        cout<<getgrade()<<endl;


    }
  };


int main()
{
    result ob;
    ob.setid(100);
    ob.setname("abc");
    ob.setm1(50);
    ob.setm2(60);
    ob.setgrade("A");
    ob.showresult();
}

