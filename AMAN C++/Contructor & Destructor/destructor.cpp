#include <iostream>
using namespace std;
class Test
{
private:
    int *arr;
    int len;
public:
    Test(int n)
    {
        len = n;
        arr = new int[len];
        cout << "Enter array for " << len << endl;
        for (int i = 0; i < len; i++)
        {
           // cin >> arr[i];
             cin >> *(arr+i);
        }
    }
    void show()
    {
        cout << "########################" << endl;
        for (int i = 0; i < len; i++)
        {
            // cout << arr[i] << endl;
            cout <<*(arr+i) << endl;
        }
        cout << "########################" << endl;
    }

    //destructor
    ~Test()
    {
            cout<<"Destructor called for"<<this<<endl;
            delete(arr);
    }
};

int main()
{
    Test t1(3);
    Test t2(4);
    t1.show();
    t2.show();
    return 0;
}
