//program to swap 

#include<stdio.h>
int main()
{
	int a,b;
	printf("entervalue of a and b\n");
	scanf("%d %d",&a,&b);
	a= a+b;
	b= a-b;
	a= a-b;
	printf("%d and %d",a,b);
	return 0;
}
