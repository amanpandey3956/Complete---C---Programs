#include<iostream>
using namespace std;
class Test
{
 public:
 void show()
 {
  cout<<"In show()..."<<endl;
 }
 void add(int x,int y)
 {
     cout<<x+y<<endl;
 }

};
int main()
{
    Test t1;
    t1.show();
    t1.add(10,20);
    // by using pointer variable
    cout<<"======================="<<endl;
    Test *p;
    p=&t1;
    p->show();
    p->add(10,20);

}
