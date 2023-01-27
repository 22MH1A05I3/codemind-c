#include<stdio.h>
#include<string.h>
int main()
{
  	char Str1[100];
  	int i;
  	scanf("%s",Str1);
  	for(i=0;Str1[i]!=NULL;i++)
  	{
  		if(Str1[i]>='A' && Str1[i]<='Z')
  		{
  			Str1[i]=Str1[i]+32;
		}
  	}
    printf("%s",Str1);
 }