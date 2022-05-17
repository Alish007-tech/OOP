#include<iostream>
using namespace std;
class amount
{
	int rs, paisa;
	public:
		void get_data()
		{
			cout<<"Enter the Rupees and Paisa"<<endl;
			cin>>rs>>paisa;
		}
		int operator <(amount a)
		{
			int c1,c2;
			c1 = rs * 100 + paisa;
			c2= a.rs *100 + a.paisa;
			if (c1<c2)
			{
				return 1;
			}
			else{
				return 0;
			}
		}
};
int main()
{
	amount a1, a2;
	a1.get_data();
	a2.get_data();
	if(a1<a2)
	{
		cout<<"First amount is less"<<endl;
	}
	else{
		cout<<"Second amount is less"<<endl;
	}
}
