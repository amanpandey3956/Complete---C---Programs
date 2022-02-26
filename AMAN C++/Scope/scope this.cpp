#include<iostream>
using namespace std;
class Test
{
 private:
 int i=0;
 public:
 Test(int i)
 {
     this->i=i;
 }
 void show()
 {
     cout<< this->i << endl;
 }

};
int main()
{
    Test t1(10);
    t1.show();
    Test t2(20);
    t2.show();
}
