#include<iostream>
using namespace std;

class distances
{
    int a;
    public:
    void get_data()
    {
        cout<<"Enter the distance"<<endl;
        cin>>a;
    }
    int operator =(distances d)
    {
        a = d.a;
        return a;
    }
    void display()
    {
        cout<<a;
    }
};

int main()
{
    distances d1, d2;
    d1.get_data();
    d2 = d1;
    cout<<"The assigned value is ";
    d2.display();
}
