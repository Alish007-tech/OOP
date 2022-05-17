// Create a class named complex with the required data members and member functions to add two complex numbers.
#include<iostream>
using namespace std;
class complex
{
	int r, im;
	public:
		void getdata()
		{
		cout<<"Enter the real and imaginary number: "<<endl;
		cin>>r;
		cin>>im;	
		}
		void add(complex c1, complex c2)
		{
			r= c1.r+c2.r;
			im=c1.im+c2.im;
		}
		void display(){
			cout<<"The addition of the complex number is "<<r<<"+"<<im<<"i"<<endl;
			
		}
};
int main()
{
	complex c1, c2, c3;
	c1.getdata();
	c2.getdata();
	c3.add(c1,c2);
	c3.display();
}
