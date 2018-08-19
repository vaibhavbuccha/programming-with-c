"""___________________________________________________________________________________________
|                                                                                             |
|      program to find the number is pallindrom or not.........                               |
|_____________________________________________________________________________________________|
"""

#include<stdio.h>
int main()
{
	int num,revint=0,reminder,orgnum;
	printf("enter the number to check it is pallindrom or not\n");
	scanf("%d",&num);
	orgnum=num;
	while(num != 0)
	{
		reminder = num%10;
		revint = revint*10 + reminder;
		num /=10;
	}
	if(revint==orgnum)
	{
		printf("the number is pallindrom");
	}
	else
	{
		printf("the number is not pallindrom");
	}
	return 0;
}
