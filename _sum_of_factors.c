#include<stdio.h>
int main()
{
    int n,i=1,sum=0;
    scanf("%d",&n);
    do
    {
        if(n%i==0)
        {
        sum=sum+i;
        }
          i++;
    }
    while(i<n);
    printf("%d",sum);
}