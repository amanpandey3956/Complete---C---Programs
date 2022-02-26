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
    student()
    {
       first_name="Aman";
       last_name="Pandey";
       major="ETC";
       year=2;
    }
    student(string a,string b,string c,int d)
    {
        first_name = a;
        last_name = b;
        major = c;
        year = d;
    }
    void print()
    {
        cout<<first_name<<"\t"<<last_name<<"\t"<<major<<"\t"<<year<<endl;
    }
};
int main()
{
    student s1;
    student s2("vishal","dubey","ETC",3);
    s1.print();
    s2.print();
}
