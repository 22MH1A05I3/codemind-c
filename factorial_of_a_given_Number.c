#include<stdio.h>
int main()
{
    int n,i=1,res=1;
    scanf("%d",&n);
    do
    {
        res=res*i;
        i++;
    }
    while(i<=n);
    printf("%d",res);
}