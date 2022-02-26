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
class mark
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
  class result:public student,public mark
  {
  private:
    int avg;
  public:
    void showresult()
    {
        avg=(getm1()+getm2())/2;
        cout<<"personal information :"<<"\t"<<endl;
        cout<< getid()<<"\t" << getname() <<"\t"<<endl;
        cout<<"Average marks :"<<"\t"<<endl;
        cout<<avg<<endl;

    }
  };


int main()
{
    result ob;
    ob.setid(100);
    ob.setname("abc");
    ob.setm1(50);
    ob.setm2(60);
    ob.showresult();
}

