#include<iostream>
using namespace std;
template<class T>
T minn(T a,T b)
{
	T min;
	if(a<b)
	{
		min = a;
	}
	else
	min = b;
	return min;
}
int main()
{
  int x, y;
  cout<<"Enter any two number"<<endl;
  cin>>x>>y;
  cout<<"The min number is :"<<min(x,y)<<endl;	
}
