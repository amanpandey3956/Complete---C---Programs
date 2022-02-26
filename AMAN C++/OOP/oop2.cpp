#include<iostream>
using namespace std;
class Account
{
private:
    //attributes of objects
    int id;
    string name;
    int balance;
public:
    //actions
    void createaccount()
    {
        cout<<"Enter id:"<<endl;
        cin>>id;
        cout<<"Enter name:"<<endl;
        cin>>name;
        balance=0;
    }
    void depositamount()
    {
        int amt;
        cout<<"Enter amount to deposit\n";
        cin>>amt;
        balance=balance+amt;
        cout<<"Balance after deposit\n"<<balance<<endl;
    }
    void withdraw()
    {
        int amt;
        cout<<"Enter amount to withdraw\n";
        cin>>amt;
        balance=balance-amt;
        cout<<"Balance after withdraw\n"<<balance<<endl;
    }
    void print()
    {
        cout<<id<<"\t"<<name<<"\t"<<balance<<endl;
    }
};
int main()
{
    Account ob1;
    ob1.createaccount();
    ob1.depositamount();
    ob1.withdraw();
    //create second object
    Account ob2;
    ob2.createaccount();
    ob2.depositamount();
    ob2.withdraw();
    cout<<"\nPrinting cust data\n";
    ob1.print();
    ob2.print();

}
