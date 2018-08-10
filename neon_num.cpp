/* 
9*9=81
8+1=9
number is neon
*/
#include<stdio.h>
int main()
{
	int num,sq,i,sum;
	printf("enter the series\n");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		sq=i*i;
		sum=0;	
		
		while(sq!=0)
		{
			sum=sum+sq%10;
			sq=sq/10;
		}
		if(sum==i)
		{
			printf("number is neon%d\n",i);
		}
	}
	

	return 0;
	
}
