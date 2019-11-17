/*
	3 .Program to swap first and last element of an integer 1-d array 
*/

#include <iostream>

using namespace std;

int main()
{
	/* code */
	int arr[100],n,temp;
	cout<<"Enter the no. of element : "<<endl;
	cin>>n;

	for (int i = 0; i < n; ++i)
	{
		cout<<"enter the value of element "<<i+1<<" : ";
		cin>>arr[i];
	}

	temp = arr[0];
	arr[0] = arr[n-1];
	arr[n-1] = temp;
	cout<<"\n :: After swapping the values of array :: \n";

	for (int i = 0; i < n; ++i)
	{
		cout<<"value of arr["<<i+1<<"] : "<<arr[i]<<endl;
	}
	return 0;
}