#include<stdio.h>
void main()
{
	char c;
	printf("enter the character\n");
	scanf("%c",&c);
	
	if((c>='a'&& c<='z')||(c>='A' && c<='Z'))
		printf("alphabet");
	else
		printf("not alphabet");
}
