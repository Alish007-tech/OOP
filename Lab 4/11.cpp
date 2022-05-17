#include <iostream>
using namespace std;
class distance
{
	int a;
	public:
		void get_data()
		{
			cout<<"Enter the distance"<<endl;
			cin>>a;
		}
		int operator > (distance d)
		{
			if(a>d.a)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
};
int main() 
{
  distance d1, d2;
d1.get_data();
d2.get_data();
if (d1>d2);
{
	cout<<"First distance is greater than second distance"<<endl;
}
else 
{
	cout<<"Second distance is greater than first distance"<<endl;
}
}

