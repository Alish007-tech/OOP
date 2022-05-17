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
    public:
    stu_detail()
    {
        cout<<"Enter the age and grade "<<endl;
        cin>>age>>grade;
    }
    void display_sd()
    {
        cout<<"Age: "<<age<<endl;
        cout<<"Grade: "<<grade<<endl;
    }
};

class detail:student, stu_detail
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
        display();
        display_sd();
        cout<<"Percentage: "<<per<<endl;
    }
};

int main()
{
    detail d;
    cout<<"--------The detail are--------"<<endl;
    d.display_all();
}
