#include<iostream>
using namespace std;
class Address
{
private:
    int house_num;
    string building_name;
    string area_name;
    string city;
public:
    Address()
    {

    }
    Address(int a,string b,string c,string d)
     {
         house_num=a;
         building_name=b;
         area_name=c;
         city=d;
     }
     void showadd()
     {
         cout<<house_num<<"\t"<<building_name<<endl;
         cout<<area_name<<"\t"<<city<<endl;
     }
};
class student
{
private:
    int id;
    string name;
    Address adr;
public:
    student(int a,string b)
    {
        id=a;
        name=b;

    }
    void showinfo()
    {
        cout<<id<<"\t"<<name<<endl;

    }
};
int main()
{
    Address adr(234,"bajajnagar","Cidco","Aurangabad");
    student s1(567,"AMAN");
    s1.showinfo();
    adr.showadd();
    return 0;
}
