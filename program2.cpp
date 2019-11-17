/*
	2.  Program to Store value entered by user in three dimensional array and display it
*/

#include <iostream>

using namespace std;

int arr1 = 2;
int arr2 = 2;
int arr3 = 2;

int main()
{
	/* code */
	
	int arr[arr1][arr2][arr3];
	cout<<"\n:: Enter the values of 3d array ::\n";
	for (int i = 0; i < arr1; ++i)
	{
		for (int j = 0; j < arr2; ++j)
		{
			for (int k = 0; k < arr3; ++k)
			{
				cout<<" arr["<<i+1<< "]["<< j+1 <<"]["<< k+1 <<"] : ";
				cin>>arr[i][j][k];
			}
		}
	}

	cout<<"\n:: Display the values of 3d array ::\n";
	for (int i = 0; i < arr1; ++i)
	{
		for (int j = 0; j < arr2; ++j)
		{
			for (int k = 0; k < arr3; ++k)
			{
				cout<<" arr["<<i+1<< "]["<< j+1 <<"]["<< k+1 <<"] : "<<arr[i][j][k] << endl;
			}
		}
	}

	return 0;
}