#include<stdio.h>
int main()
{
    int a[100],n,i;
    float mean=0,sum=0;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
        mean=sum/n ;
    }
    printf("%.2f ",mean);
}