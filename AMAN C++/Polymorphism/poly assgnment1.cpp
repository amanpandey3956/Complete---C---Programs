#include<iostream>
using namespace std;
class GeneralBank
{
    public:
    //abstract class
    virtual float getsavinginterestrate()=0;
    virtual float getfixedinterestrate()=0;
};
class ICICIBank:public GeneralBank
{
public:
    float getsavinginterestrate()
    {
        return 4;
    }
    float getfixedinterestrate()
    {
        return 8.5;
    }
};
class KotMBank:public ICICIBank
{
public:
    float getsavinginterestrate()
    {
        return 6;
    }
    float getfixedinterestrate()
    {
        return 9;
    }
};
int main()
{
   ICICIBank ob2;
   KotMBank ob3;
   GeneralBank *p;
   p=&ob2;
   cout<<"Saving Interest Rate for ICICI Bank is :"<<p->getsavinginterestrate()<<"%"<<endl;
   cout<<"Fixed Interest Rate for ICICI Bank is :"<< p->getfixedinterestrate()<<"%"<<endl;
   p=&ob3;
   cout<<"Saving Interest Rate for KotMBank Bank is :"<<p->getsavinginterestrate()<<"%"<<endl;
   cout<<"Fixed Interest Rate for KotMBank  Bank is :"<<p->getfixedinterestrate()<<"%"<<endl;



}

