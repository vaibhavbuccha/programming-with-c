//program to find leap year or not.

#include<stdio.h>
int main()
/*
{
	int year;
	printf("enter the year to check it is leap year or not\n");
	scanf("%d",year);
	if(year%4==0)
	{
		if(year%100==0)
		{
			if(year%400==0)
			{
				printf("the year %d is leap year",year);
			}
			else
			{
				printf("year:%d is not leap year",year);
			}
		}
		else
		{
			printf("the year %d is leap year",year);
		}
	}
	else
		{
			printf("year:%d is not leap year",year);
		}
		return 0;
}
*/
{
    int year;

    printf("Enter a year: ");
    scanf("%d",&year);

    if((year%4 ==  0) && (year%100==0) && (year%400==0))
                printf("%d is a leap year.", year);
            else
                printf("%d is not a leap year.", year);
    return 0;
}
