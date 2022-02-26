#include<iostream>
using namespace std;
class Airline
{
private:
    string departure;
    string arrival;
    string flight_number;
    string seat_assignment;
public:
    Airline()
    {
       departure="Goa";
       arrival="Mumbai";
       flight_number="123SR";
       seat_assignment="12F";
    }
    Airline(string a,string b,string c,string d)
    {
        departure = a;
        arrival = b;
        flight_number = c;
        seat_assignment = d;
    }
    void print()
    {
        cout<<departure<<"\t"<<arrival<<"\t"<<flight_number<<"\t"<<seat_assignment<<endl;
    }
};
int main()
{
    Airline A1;
    Airline A2("Pune","Nashik","456FD","13F");
    A1.print();
    A2.print();
}
