#include<stdio.h>
#include<math.h>
int main()
//program to print the root of the quadretic equation.
/*
cofficient of the equation a , b , c;
determinatnt = b^2-4ac;
determiant > 0 => root real => -b+-sqrt(detreminant)/2ac;
determiant = 0 => root1 = root2 => -b/2a;
determinant < 0 => roots are imaginary => real part is = -b/2a; imaginary part = sqrt(-detreminant)/2a;
*/


{
	double a,b,c,root1,root2,imaginary_part,determinant,real_part;
	printf("enter the cofficient of equation a , b , c\n");
	scanf("%lf %lf %lf",&a, &b, &c);
	determinant = b*b-4*a*c;
	 
	if(determinant > 0)
	{	determinant = b*b-4*a*c;
		root1= (-b+sqrt(determinant))/2*a;
		root2= (-b-sqrt(determinant))/2*a;
		printf("root1: %2lf \n root2: %2lf",root1,root2);
	}
	if(determinant == 0)
	{
		root1 = root2 =-b/(2*a) ;
		printf("root1: %2lf \n root2: %2lf",root1,root2);
	}
	else
	{	
		real_part= -b/(2*a);
		imaginary_part = sqrt(-determinant)/(2*a);
		printf("root1: %2lf+%2lfi \n root2:%2lf-%2lfi",real_part,imaginary_part);
	}
	return 0;
}

