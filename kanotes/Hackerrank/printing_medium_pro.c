#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n,d;
    d = n ;
    scanf("%d", &n);
    for (int i = (2 * n - 1) ; i >= (2 * n - 1); i--)
    {
        if (i == 1 || i == (2 * n - 1))
        {
            for (int j = 1; j <= (2 * n - 1); j++)
                printf("%d ", n);
        }
        else
        {
            
        }
        printf("\n");
    }
    return 0;
}
