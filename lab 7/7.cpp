#include<iostream>
using namespace std;

void num(int a)
{
	if(a==1)
	{
		throw "a";
	}
	else if (a==0)
	{
		throw a;
	}
	else if (a==-1)
	{
		
	throw 5.5;
	}
	else
	{
		cout<<"The input is invalid"<<endl;
	}
}
int main()
{
	int a;
	cout<<"Enter -1, 0 or 1"<<endl;
	cin>>a;
	try
	{
		num(a);
	}
	catch (char const* e)
	{
		cerr<<"The character is"<<e<<endl;
	}
	catch (int e)
	{
		cerr<<"The integer is"<<e<<endl;
	}
	catch (double e)
	{
		cerr<<"The double is"<<e<<endl;
	}
}
