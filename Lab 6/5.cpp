#include<iostream>
using namespace std;

class B;
class A
{
    int a;
    public:
    void get_data()
    {
        cout<<"Enter the value of a "<<endl;
        cin>>a;
    }
    friend class B;
};

class B
{
    int b;
    public:
    void get_data()
    {   
        cout<<"Enter the value of b "<<endl;
        cin>>b;
    }
    void average(A a, B b)
    {
        float ave;
        ave = (float)(a.a + b.b)/2;
        cout<<"The average is "<<ave<<endl;
    }
};

int main ()
{
    A a;
    a.get_data();
    B b;
    b.get_data();
    b.average(a,b);
}
