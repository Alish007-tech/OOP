#include<iostream>
using namespace std;

class shape
{
    public:
    double l, b;
    void get_data(double le, double br)
    {
        l = le;
        b = br;
    }
    virtual double display_area()=0;
};

class triangle:public shape
{
    public:
    double display_area()
    {
        return ((l*b)/2);
    }
};

class rectrangle:public shape
{
    public:
    double display_area()
    {
        return (l*b);
    }
};

int main()
{
    double le,br;
    cout<<"Enter the value of length & breadth "<<endl;
    cin>>le>>br;

    triangle t;
    rectrangle r;

    shape *p = &t;
    p->get_data(le,br);
    cout<<"The area of the triangle is "<<p->display_area()<<endl;

    p=&r;
    p->get_data(le,br);
    cout<<"The area of the rectangle is "<<p->display_area()<<endl;
}
