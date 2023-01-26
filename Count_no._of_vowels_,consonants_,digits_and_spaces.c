#include<stdio.h>
int main()
{
	char str[100];
	int i,j,v=0,c=0,d=0,s=0;
	scanf("%[^
]s",str);
	for(i=0;str[i]!=NULL;i++)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
		{
			v=v+1;
		}
		else if(str[i]>='a' && str[i]<='z'||str[i]>='A' && str[i]<='Z')
		{
			c=c+1;
		}
		else if(str[i]>='0' && str[i]<='9')
		{
		    d++;
		}
		else
		{
		    s++;
		}
	}
	printf("Vowels: %d
Consonants: %d
Digits: %d
White spaces: %d",v,c,d,s);
}