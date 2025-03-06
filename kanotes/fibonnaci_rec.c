#include <stdio.h>
int fibo(int);
int main()
{
    int n, i, j = 0;
    printf("Enter your number : ");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        printf("%d\a\t", fibo(j));
        j++;
    }
    return 0;
}
int fibo(int j)
{
    if (j == 0 || j == 1)
    {
        return j ;
    }
    else
    {
        return ( fibo ( j - 1) + fibo (j-2));
    }
}