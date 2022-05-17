// Create a class named Length with the required data  members and member functions  to add 
// two lengths given by the  user in feet and inches format.
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
		void add(length 11, length 12)
		{
		inch = 11.inch + 12.inch;
		fi = inch / 12;
		inch = inch % 12;
		feet = 11.feet + 12.feet + fi;	
		}
		void display()
		{
			cout<<"The total length is"<<feet<<"feet"<<inch<<"inch"<<endl;
			
		}
};
int main()
{
	length 11, 12, 13;
	11.getdata();
	12.getdata();
	13.add(11,12);
	13.display();
}
