#include <stdio.h>
int main ()
{
    int i=1,j=1,n,k=1;
    printf("enter your number of lines ");
    scanf ("%d",n);
    while (i<=n)
    {
        j=1;
        while (j<=i)
        {
            printf("%d ",k);
            k++;
            j++;
        }
        i++;
    }
    return 0;
}