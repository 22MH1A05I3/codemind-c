#include<stdio.h>
int main()
{
    int a[100],n,i,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
         if(a[i]%2==0)
         {
            sum=sum+a[i];
         }    
    }    
    printf("%d ",sum);   
}