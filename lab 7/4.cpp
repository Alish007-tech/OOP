#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cout<<"Enter any two number"<<endl;
	cin>>a>>b;
	try
	{
		if(b==0)
		{
			throw b;
		}
		else
		{
			cout<<"Result is"<<(float)a/b<<endl;
		}
	}
	catch(int e)
	{
		cerr<<"Divide by zero is not possible b="<<e<<endl;
	}
}
