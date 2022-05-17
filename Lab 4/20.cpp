#include<iostream>
using namespace std;
class Currency
{
	float rupee;
	int rs;
	int paisa;
	public:
		void get_data()
		{
			cout<<"Enter the price in rupee(float)"<<endl;
			cin>>rupee;
		}
		void convert()
		{
		rs = int(rupee); 
        paisa = 100*(rupee-rs); 
		}
		void display(){
			cout<<"The rupee is"<<endl;
			cout<<"rs ="<<rs<<endl;
			cout<<"paisa="<<paisa<<endl;
		}
};
int main()
{
	Currency a1;
	a1.get_data();
	a1.convert();
	a1.display();
}
