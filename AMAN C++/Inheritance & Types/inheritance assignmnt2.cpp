#include<iostream>
using namespace std;
class person
{
private:
    string first_name;
    string last_name;
public:
    void setfirst_name(string x)
    {
        first_name=x;
    }
    string getfirst_name()
    {
        return first_name;
    }
    void setlast_name(string n)
    {
        last_name=n;
    }
    string getlast_name()
    {
        return last_name;
    }
};
class employee:public person
{
private:
    float annualsalary;
    int year;
    int insurancenumber;
public:
    void setannualsalary(float y)
    {
        annualsalary=y;
    }
    float getannualsalary()
    {
        return annualsalary;
    }
    void setyear(int y)
    {
        year=y;
    }
    int getyear()
    {
        return year;
    }
    void setinsurancenumber(int z)
    {
        insurancenumber=z;
    }
    int getinsurancenumber()
    {
        return insurancenumber;
    }
   void show()
   {
       cout<<"first name is:"<<endl;
       cout<<getfirst_name()<<"\t"<<endl;
       cout<<"lastname is:"<<"\t"<<endl;
       cout<<getlast_name()<<"\t"<<endl;
       cout<<"annual salary is:"<<endl;
       cout<<getannualsalary()<<"\t"<<endl;
       cout<<" year of joining :"<<"\t"<<endl;
       cout<<getyear()<<"\t"<<endl;
       cout<<"insurance number is :"<<"\t"<<endl;
       cout<<getinsurancenumber()<<"\t"<<endl;

   }

};
int main()
{
    employee ob;
    ob.setfirst_name("Aman");
    ob.setlast_name("Pandey");
    ob.setannualsalary(500000);
    ob.setyear(2003);
    ob.setinsurancenumber(123);
    ob.show();
}

