// Recursion function for calculate factorial and sum of first natural numbers 
#include <stdio.h>
int sum_rec(int);
int fact_rec(int);
int main()
{
    int i;
    printf("Enter your number for calculation : ");
    scanf("%d", &i);
    int sum, fact;
    sum = sum_rec(i);
    fact = fact_rec(i);
    printf("%d is sum of first %d natural numbers \n", sum, i);
    printf("%d is factorial of first %d natural numbers \n", fact, i);
    return 0;
}
// Calculate sum from this function
int sum_rec(int i)
{
    int k;
    if (i == 1)
    {
        return 1;
    }
    else
    {
        return (i + sum_rec(i - 1));
    }
}
// calculate  the factorial value from this function 
int fact_rec(int n)
{
    if (n == 1)              //( we can also compare with 0 as well 
        return 1;           // but we want to return 1 value as it is )
    else
        return (n * fact_rec(n - 1));
}