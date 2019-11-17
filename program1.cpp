/*
	1. Program to store temperature of two different cities for a week and display it
*/

#include <iostream>
using namespace std;

const int city = 2;
const int week = 7;

int main()
{
	int temp[city][week];

	cout << " :: Enter the temperature of a city. ::  \n";

	// inserting the values into temperature array 
	for (int i = 0; i < city; ++i)
	{
		for (int j = 0; j < week; ++j)
		{
			cout<<" city "<<i+1<< " ,day "<< j+1 <<" : ";
			cin>>temp[i][j];
		}
	}

	cout<< "\n \n :: Displaying values ::\n";

	for (int i = 0; i < city; ++i)
	{
		for (int j = 0; j < week; ++j)
		{
			cout<<" City "<< i+1 <<" ,day "<<j+1 << " = "<<temp[i][j] << endl;
		}
	}

	return 0;
}