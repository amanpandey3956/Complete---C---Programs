#include<iostream>
using namespace std;
void sayHello()
{

     cout<<"Hello World"<<endl;
     cout<<"this is first function!!!"<<endl;
}
void add()
{
  int a=10;
  int b=20;
  int c;
  c=a+b;
  cout<<"Addition is :"<<c<<endl;

}
int main()
{

 cout<<"Before"<<endl;
 sayHello();
 cout<<"after"<<endl;
 add();


}
