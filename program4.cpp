/*
	4.Code to PUSH Element in a stack using Array
*/

#include <iostream>
#include <stack>

using namespace std;

int main()
{
	int arr[100],n;
	stack<int>	myStack;

	cout<<"Enter the no of Elements you want to push into stack : ";
	cin>>n;

	for (int i = 0; i < n; ++i)
	{
		cout<<"enter the value of element "<<i+1<<" : ";
		cin>>arr[i];
	}

	for (int i = 0; i < n; ++i)
	{
		myStack.push(arr[i]);
	}

	cout<<"\n:: stack => last in first out :: \n" ;

	while (!myStack.empty()) { 
        cout << ' ' << myStack.top(); 
        myStack.pop(); 
    } 
	return 0;
}