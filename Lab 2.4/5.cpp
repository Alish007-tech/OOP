/*Write a program to find the sum of all the elements of a 
2-D array of size 3x4 using pointer.*/ 
#include <iostream>
using namespace std;
int main()
{
	int array[3][4]={{4,5,6,2},{2,5,6,8},{8,10,12,15}};
	int sum =0, (*p)[4];
	p= array;
	for (int i=0; i<3; i++)
	{
		for(int j=0; j<4; j++)
		{
			sum += (p[i][j]);
		}
	}
	cout<<"The sum of the elements is: "<<sum;
}
