//write a program to find the fabonacci series/
/*
  t1= 0;
  t2=1;
  t3=t1+t2 = 1;
  t4=t2+t3 = 2;
  series = 0 , 1, 1, 2, 3, 5, 8, 13, 21,34..............
 */


#include<stdio.h>
int main()
{
	int i,num,t1,t2,nextt;
	t1=0;
	t2=1;
	printf("enter the number till you find fabonacci series\n");
	scanf("%d",&num);
	printf("the fabonacci series is:\n");
	for(i=1;i<=num;++i)
	{
		printf("%d, ",t1);
		nextt = t1+t2;
		t1 = t2;
		t2 = nextt;
	}
	return 0;
	
}
