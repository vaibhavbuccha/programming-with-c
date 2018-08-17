/*_______________________________________________________|
|program to find the power of the intiger.               |
|           base,power,result                            |
|           base = 2;                                    |
|           power  =3                                    |
|           result = 1                                   |
|           while(power!=0){                             |
|           result *= base                               |
|           --power}                                     |
|________________________________________________________|*/

#include<stdio.h>
int main()
{
	int base,power;
	long long result=1;
	printf("enter the base:\n");
	scanf("%d",&base);
	printf("enter the power\n");
	scanf("%d",&power);
	while(power!=0)
	{
		result *=base;
		--power;
	}
	printf("the result is:%lld",result);
	return 0;
}
