#include<stdio.h>
int main()
{
  char s1[10],s2[10],i,j,count1=0,count2=0;
  //s1="";
  //s2="";
  scanf("%s",&s1);
  scanf("%s",&s2);
  for(i=0;s1[i]!='\0';++i)
  {
  	count1++;
  	
  }
  for(j=0;s2[j]!='\0';++j){
  	count2++;
  }
  printf("%d %d \n",count1,count2);
  s1[i]=s2[j];
  printf("%s",s1);
    return 0;
}
