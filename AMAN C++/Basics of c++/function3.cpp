#include<iostream>
using namespace std;
int add(int a,int b)
{
  int c;
  c=a+b;
  return c;

}
float area(float r)
{
  float a;
   a=3.14*r*r;
  return a;
}
int main()
{
   int x;
   x=add(100,200);
   cout<<"Addition is "<<x<<endl;
   float y;
   y=area(1.2);
      cout<<"Area is "<<y<<endl;
}
