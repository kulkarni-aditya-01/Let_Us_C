#include <stdio.h>
int main ()
{
    int i,j,n;
    float k=0.0,fact;
    printf("enter your number :\n");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        fact=1.0;
        for (j=1;j<=i;j++)
        {
            fact=fact*j;
        }
        k = k+ i/fact;
    }
    printf("1/1! + 2/2! ....upto seven number = %f",k);
    return 0;
}