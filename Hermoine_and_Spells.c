#include<stdio.h>
int main()
{
    int m,n,o,p;
    scanf("%d%d%d",&m,&n,&o);
    if(m>n && n<o)
    {
        p=m+o;
    }
    else if(n>m && n<o)
    {
        p=n+o;
    }
    else
    {
        p=m+n;
    }
    printf("%d",p);
}   