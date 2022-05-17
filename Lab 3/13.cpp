// Create a class named Currency with the required data members and member functions to add 
// two currency entered by the user in RS and paisa format.

#include<iostream>
using namespace std;
class currency
{
    int rs, pa, r;
    public:
    void getData()
    {
        cout<<"Enter the currency in Rupees and paisa"<<endl;
        cin>>rs>>pa;
    }
    void add(currency c1, currency c2)
    {
        pa = c1.pa + c2.pa;
        r = pa / 100;
        pa = pa  % 100;
        rs = c1.rs + c2.rs + r;
    }
    void display()
    {
        cout<<"The total currency is Rs."<<rs<<" "<<pa<<" paisa"<<endl;
    }
};
int main()
{
    currency c1, c2, c3;
    c1.getData();
    c2.getData();
    c3.add(c1, c2);
    c3.display();
}
