#include<iostream>
using namespace std;
class B;//forward declaration
class A
{
private:
    int i;
public:
    A()
    {
     i=10;
    }
    void showi()
    {
        cout<< i << endl;
    }
    friend void swap(A & t1,B & t2);
};
class B
{
private:
    int j;
public:
    B()
{
 j=20;
}
    void showj()
    {
        cout<< j << endl;
    }
    friend void swap(A & t1,B & t2);
};
void swap(A & t1,B & t2)
{
  cout<< "==========" <<endl;
  int k;
  k=t1.i;
  t1.i=t2.j;
  t2.j=k;
}
int main()
{
  A ob1;
  B ob2;
  ob1.showi();
  ob2.showj();
  swap(ob1,ob2);
  ob1.showi();
  ob2.showj();
}
