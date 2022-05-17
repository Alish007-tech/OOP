#include<iostream>
using namespace std;
class length
{
    int feet, inch, fi;
    public:
    void getData()
    {
        cout<<"Enter the length in feet and inches"<<endl;
        cin>>feet>>inch;
    }
    void add(length l1, length l2)
    {
        inch = l1.inch + l2.inch;
        fi = inch / 12;
        inch = inch % 12;
        feet = l1.feet + l2.feet + fi;
    }
    void display()
    {
        cout<<"The total length is "<<feet<<" feet "<<inch<<" inch"<<endl;
    }
};
int main()
{
    length l1, l2, l3;
    l1.getData();
    l2.getData();
    l3.add(l1, l2);
    l3.display();
}
