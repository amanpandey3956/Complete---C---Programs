#include<iostream>
using namespace std;
void add(int a,int b)
{
  int c;
  c=a+b;
  cout<<"Addition is "<<c<<endl;

}
void area(float r)
{
  float a;
   a=3.14*r*r;
   cout<<"Area is "<<a<<endl;
}
int main()
{
  int x=100,y=200;
  add(x,y);
add(80,90);
area(1.2);
}
