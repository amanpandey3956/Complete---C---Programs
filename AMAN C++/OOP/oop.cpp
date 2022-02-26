#include<iostream>
using namespace std;
class Demo
{
private:
    void show()
    {
        cout<<"In private function"<<endl;
    }
public:
    void disp()
    {
        cout<<"In public function"<<endl;
         show();
    }
};
int main()
{
    Demo t1,t2,t3;
    t1.disp();
}
