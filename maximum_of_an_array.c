#include <stdio.h>
int main() 
{
  int n;
  float arr[100];
  scanf("%d", &n);
  for (int i = 0; i < n; ++i) 
  {
    scanf("%f", &arr[i]);
  }
  for (int i = 1; i < n; ++i)
  {
    if (arr[0] < arr[i]) 
    {
      arr[0] = arr[i];
    }
  }
  printf("%.f", arr[0]);
  return 0;
}