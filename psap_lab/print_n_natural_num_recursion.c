#include <stdio.h>
void natural_rec(int);
int main()
{
    int n;
    printf("Enter your number : ");
    scanf("%d", &n);
    natural_rec(n);
    return 0;
}
void natural_rec(int n)
{
    if (n == 0)
       ;
    else
    {
        printf("%d\t", n);
        natural_rec(n-1);
    }
}