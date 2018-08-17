/*------------------------------------------------------------|
|program to count the intiger                                 |
|           number = 12234;                                   |
|           while(number!=0){                                 |
|           number/10                                         |
|           count++}                                          |
|_____________________________________________________________|*/

#include<stdio.h>
int main()
{
	long n;
	int count=0;
	printf("enter the number\n");
	scanf("%ld",&n);
	while(n!=0)
	{
		n /= 10;
		count++;
	}
	printf("the count is %d",count);
	return 0;
}
