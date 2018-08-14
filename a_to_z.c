//program to print A to Z
#include<stdio.h>
int main ()

{
	char c;
	for(c='A'; c<='Z';++c)
	{
		printf("%c , ",c);
	}
	return 0;
}

//Example #2: Program to Display English Alphabets in Uppercase and Lowercase
{
	char c;
	printf("enter l for lower case and u for upper case:\n");
	scanf("%c ",&c);
	if(c=='U' || c=='u')
	{
		for(c='A'; c<='Z';++c)
		printf("%c , ",c);
	}
	else if(c == 'L' || c == 'l')
	{	
		for(c='a'; c<='z';++c)
		printf("%c , ",c);
	}
	else
		printf("you enter invalid character");
	return 0;
} 
