#include <stdio.h>
int main ()
{
  int n,i,y ;
  float sum ,x;
  scanf("%d",&n);
  int num[n];
  for (i=0 ; i<n ; i++)
  {
    scanf("%d",&num[i]);
  }
  sum=0;
  for (i=0 ; i<n ; i++)
  {
    sum = sum + num[i] ;
  }
  x = sum/n ;
  y=0;
  for (i=0 ; i< n;i++)
  {
    if(num[i] >= x )
    {
      y = y + num[i];
    }
  }
   printf("%d ",y);
  return 0;
}
