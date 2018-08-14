//wap to find the lcm.

#include<stdio.h>
int main()

{
	int n1,n2,minmultiple;
	printf("enter the value ofn1 nad n2\n");
	scanf("%d %d",&n1,&n2);
	//maximum number is stored in minmultiple.
	minmultiple=(n1>n2)?n1:n2;
	while(1)
	//always true.
	{ 
		if(minmultiple % n1 == 0 && minmultiple % n2 == 0)
			printf("the lcm of %d and %d is %d",n1,n2,minmultiple);
			break;
		++minmultiple;
	}
	return 0;
}


//lcm using hcf.

{
	int lcm,gcd,n1,n2,i;
	printf("enter the value of n1 and n2\n");
	scanf("%d %d",&n1,&n2);
	for(i=1; i<=n1 && i<=n2;++i)
	{
		if(n1 % i==0 && n2% i==0)
		
			gcd = i;		
		
	}
	lcm=(n1*n2)/gcd;
	printf("the lcm of %d and %d is %d",n1 ,n2 ,lcm);
	return 0;
}
