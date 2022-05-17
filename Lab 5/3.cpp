#include<iostream>
using namespace std;

class number
{
    public:
    int a,b;
    number()
    {
        cout<<"Enter any number "<<endl;
        cin>>a>>b;
    }
};

class add:public number
{
    public:
    add()
    {
        cout<<"The sum of the number is "<<a+b<<endl;
    }
};

class subtract:public number
{
    public:
    subtract()
    {
        cout<<"The differences between them are "<<a-b<<endl;
    }
};

class divide: public number
{
    public:
    divide()
    {
        cout<<"The division is " <<a/b<<endl;
    }
};

class modulo: public number
{
    public:
    modulo()
    {
        cout<<"The modulo is "<<a%b<<endl;
    }
};

int main()
{
    add a1;
    subtract s1;
    divide d1;
    modulo m1;
}
