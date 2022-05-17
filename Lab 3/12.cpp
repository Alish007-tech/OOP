// Create a class named Time with the required data members
//  and member functions to add two time entered by the user in hour and minutes format.

#include <iostream>
using namespace std;
class time
{
	int min, hr, sec;
	public:
		void getdata()
		{
		cout<<"Enter the time in hour and minutes"<<endl;
		cin>>hr>>min;	
		}
		void add(time t1, time t2)
		{
			min = t1.min + t2.min;
			sec= min/60;
			min = min % 60;
			hr = t1.hr + t2.hr +sec;
		}
		void display()
		{
			cout<<"The total time is "<<hr<<"hour"<<min<<"minute"<<endl;
			
		}
};
int main()
{
	time t1, t2, t3;
	t1.getdata();
	t2.getdata();
	t3.add(t1,t2);
	t3.display();
}
