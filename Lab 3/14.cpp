// Write a program to count the number of objects created for a class using the static members of  class.
#include<iostream>
using namespace std;
class item
{
    string name;
    int code, price;
    static int count;
    public:
    void getdata()
    {
        cout<<"Enter the data of item name, code & price"<<endl;
        cin>>name>>code>>price;
        cout<<endl;
        
    }
    void co()
    {
        count++;
        cout<<"Item N0."<<count<<endl;
    }
    void display()
    {
        co();
        cout<<"Name:"<<name<<endl;
        cout<<"Code:"<<code<<endl;
        cout<<"Price:"<<price<<endl;
        cout<<endl;
    } 
};
int item::count;
int main()
    {
        item a1, a2, a3;
        a1.getdata();
        a2.getdata();
        a3.getdata();
        a1.display();
        a2.display();
        a3.display();
    }
