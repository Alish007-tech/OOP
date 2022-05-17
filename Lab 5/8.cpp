#include<iostream>
using namespace std;

class student
{
    int id;
    string name;
    public:
    student()
    {
        cout<<"Enter the student id and name "<<endl;
        cin>>id>>name;
    }
    void display()
    {
        cout<<"Student ID: "<<id<<endl;
        cout<<"Name: "<<name<<endl;
    }
};

class stu_detail
{
    int age, grade;
    student s;
    public:
    stu_detail()
    {
        cout<<"Enter the age and grade "<<endl;
        cin>>age>>grade;
    }
    void display_sd()
    {
        s.display();
        cout<<"Age: "<<age<<endl;
        cout<<"Grade: "<<grade<<endl;
    }
};

int main()
{
    stu_detail d;
    cout<<"---------The detail are----------"<<endl;
    d.display_sd();
}
