/*program to find the common greatest intiger
*/

#include<stdio.h>
int main()
//using for loop and if state ment

{
	int n1,n2,i,gcd;
	printf("enter the value of n1 and n2:\n");
	scanf("%d %d",&n1,&n2);
	for(i=1 ; i<=n1 && i<=n2; ++i)
	{
		if(n1%i==0 && n2%i == 0)
		
			gcd = i;
		
	}
	printf("the gcd of %d and %d is %d",n1,n2,gcd);
	return 0;
}

//********************************************************************************************************************
//using while loop

{
	int n1,n2;
	printf("enter the value of n1 and n2\n");
	scanf("%d %d",&n1,&n2);
	while(n1 != n2)
	{
		if(n1>n2)
			n1 -= n2;
		else
			n2 -= n1;	
	}
	printf("GCD : %d",n1);	
} 

//*************************************************************************************************************************
//both +ve and -ve number

{
	int n1,n2;
	printf("enter the value of n1 and n2:\n");
	scanf("%d %d",&n1,&n2);
	(n1>0)?n1:-n1;
	(n2>0)?n2:-n2;
	while(n1 != n2)
	{
		if(n1>n2)
			n1 -= n2;
		else
			n2 -= n1;	
	}
	printf("GCD: %d",n1);
	return 0;
}
