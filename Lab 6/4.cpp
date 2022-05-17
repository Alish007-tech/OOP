#include<iostream>
using namespace std;

class B;
class A
{
    protected:
    int a ;
    public:
    void get_data()
    {
        cout<<"Enter any number "<<endl;
        cin>>a;
    }
    void before_swap()
    {
        cout<<"The value of a is "<<a<<endl;
    }
    friend void swap(A,B);
};

class B
{
    int b ;
    public:
    void get_data()
    {
        cout<<"Enter any number "<<endl;
        cin>>b;
    }
    void before_swap()
    {
        cout<<"The value of b is "<<b<<endl;
    }
    friend void swap(A,B);
};
void swap(A a, B b)
{
    int c;
    c = a.a;
    a.a = b.b;
    b.b = c;
    cout<<"The value of a after swap is "<<a.a<<endl;
    cout<<"The value of b after swap is "<<b.b<<endl;
}

int main()
{
    A a;
    B b;
    a.get_data();
    b.get_data();
    a.before_swap();
    b.before_swap();
    swap(a,b);
}
