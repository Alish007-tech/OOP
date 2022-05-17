/*Write a program to read and display 3 objects of item 
class containing data member item, name ,code and price.*/ 

#include<iostream>
using namespace std;
class item
{
	string name; 
		int code, price;
		public:
		
		void getdata()
		{
			cout<<"Enter the data of item name, code & price"<<endl;
			cin>>name>>code>>price;
			cout<<endl;
			
		}
		void display()
		{
			 cout<<"Name:"<<name<<endl;
        cout<<"Code:"<<code<<endl;
        cout<<"Price:"<<price<<endl;
        cout<<endl;
		}
};
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


