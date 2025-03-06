// one of the best question for logic i found ever for prime and prime factors  //
#include <stdio.h>
void prime_rec(int, int);
int main()
{
    int i, n;
    printf("Enter your number : ");
    scanf("%d", &n);
    prime_rec(n, 2);
    return 0;
}
void prime_rec(int x, int j)
{
    if (j <= x)
    {
        if (x % j == 0)
        {
            printf("%d ", j);
            x = x / j;
        }
        else
            j++;
    }
    return (prime_rec(x, j));
}
// void prime_factor(int);
// int main()
// {
//     int x, n;
//     printf("Enetr your number you wants to be factorised : ");
//     scanf("%d", &n);
//     prime_factor(n);
//     return 0;
// }
// void prime_factor(int n)
// {
//     int i = 3, r;
//     while (n % 2 == 0)
//     {
//         printf("%d ", 2);
//         n = n / 2;
//     }
//     for (i = 3; i <= n ; i = i + 2)
//     {
//         while (n % i == 0)
//         {
//             printf("%d ", i);
//             n = n / i;
//         }
//     }
// }
// int main()
// {
//     // total prime number form 1 to n
//     int n, i, x = 2;
//     printf("Enter your number : ");
//     scanf("%d", &n);
//     for (x=2;x<=n;x++)
//     {
//         for (i = 2; i < x; i++)
//         {
//             if (x % i == 0)
//                 break;
//         }
//         if (i == x)
//             printf("%d ", i);
//     }
//     return 0;
// }
