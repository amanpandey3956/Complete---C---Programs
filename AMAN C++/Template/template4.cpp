#include<iostream>
#include<vector>
using namespace std;
class student
{
private:
    int id;
    string name;
public:
    student(int x,string n)
    {
        id=x;
        name=n;
    }
    int getid()
    {
        return id;
    }
    string getname()
    {
        return name;
    }
};
int main()
{
    vector<student> v1;
    student s1(100,"aman");
    student s2(200,"pandey");
    v1.push_back(s1);
    v1.push_back(s2);
    //for each loop
    for(student st:v1)
    {
        cout<<st.getid()<<"\t"<<st.getname()<<endl;
    }

}
