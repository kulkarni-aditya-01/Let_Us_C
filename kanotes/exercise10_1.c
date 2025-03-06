#include <stdio.h>
int binary(int);
int binary_rec(int);
int main()
{
    int n, bin;
    printf("Eneter your conversion number : ");
    scanf("%d", &n);
    // printf("%d is binary conversion ", binary(n));
    printf("%d is binary conversion ", binary_rec(n));
    return 0;
}
int binary_rec(int n)
{
    int i = 0, rem, j = 1;
    if (n != 0)
    {
        rem = n % 2;
        i = rem * j + i + binary_rec(n / 2);
        j *= 10;
        binary_rec(n / 2);
        return (i);
    }
}
// int binary(int n)
//  {
//      int j,base=1 ,  bin=0 ;
//      for ( n = n ; n !=0; n=n/2 )
//      {
//          j = n % 2 ;
//          bin = j*base + bin ;
//          base*=10;
//      }
//      return bin;
//  }