#include<stdio.h>
int main()
{
    int arr[100],n,i,sum = 0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
          scanf("%d",&arr[i]);
          sum = sum + arr[i];
    }      
    printf("%d",sum);
}