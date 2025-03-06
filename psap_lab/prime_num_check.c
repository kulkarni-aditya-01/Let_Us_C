#include <stdio.h>
int main()
{
    int n, a,i;
    printf("Enter a number : ");
    scanf("%d", &n);
    int prime;
    for (int i = 2; i < n; i++)
    {
        a = n % i;
        if (a == 0)
        {
            prime = 1;
            break;
        }
        // else
        // {
        //     prime = 1;
        // }
    }
    if (prime == 1)
    {
        printf("%d is not a prime ", n);
    }
    else
    {
        printf("%d is a prime", n);
    }
    return 0;
}