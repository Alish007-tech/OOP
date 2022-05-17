#include<iostream>
using namespace std;

class place
{
    public:
    string name, address;
    int mobile;

    void getData()
    {
        cout<<"Enter the name, address & mobile number "<<endl;
        cin>>name>>address>>mobile;
    }
    virtual void display()=0;
};

class ktm:public place
{
    void getData();
    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Address: "<<address<<endl;
        cout<<"Number: "<<mobile<<endl;
        cout<<endl;
    }
};

class mnr:public place
{
    void getData();
    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Address: "<<address<<endl;
        cout<<"Number: "<<mobile<<endl;
        cout<<endl;
    }
};

int main()
{
    ktm k;
    mnr m;
    place *p=&k;
    cout<<"-------For ktm--------"<<endl;
    p->getData();

    p=&m;
    cout<<"-------For mnr--------"<<endl;
    p->getData();

    cout<<"-----The detail-----"<<endl;
    p=&k;
    p->display();

    p=&m;
    p->display();
}
