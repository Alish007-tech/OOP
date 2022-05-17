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
    ~student()
    {
        cout<<"The memory is being dealocated for class student"<<endl;
    }
};

class stu_detail:public student
{
    int age, grade;
    public:
    stu_detail()
    {
        cout<<"Enter the age and grade "<<endl;
        cin>>age>>grade;
    }
    void display_sd()
    {
        display();
        cout<<"Age: "<<age<<endl;
        cout<<"Grade: "<<grade<<endl;
    }
};

class detail:stu_detail
{
    int per;
    public:
    detail()
    {
        cout<<"Enter the percentage obtain by student "<<endl;
        cin>>per;
    }
    void display_all()
    {
        display_sd();
        cout<<"Percentage: "<<per<<endl;
    }
};

int main()
{
    detail d;
    cout<<"---------The detail are----------"<<endl;
    d.display_all();
}
