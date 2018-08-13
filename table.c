//wap to find table of a number


#include<stdio.h>
int main()
{
	int i,n;
	printf("enter the number to find the table\n");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		printf("%d * %d = %d\n ",i,n,i*n);
	}
	return 0;
}


