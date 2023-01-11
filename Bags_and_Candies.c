#include<stdio.h>
int main()
{
    int x,y,z,n,r;
    scanf("%d%d%d",&x,&y,&z);
    n=y*z;
    r=x/n;
    if(x%n!=0)
    {
       r++;
    }
     printf("%d",r);
}