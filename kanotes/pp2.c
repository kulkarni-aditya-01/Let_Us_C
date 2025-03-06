#include <stdio.h>
int main()
{
    // factorial values
    // int num, fact, i, x;
    // printf("enter your num :");
    // scanf("%d", &num);
    // fact = i = x = 1;
    // while (i <= num)
    // {
    //     fact = fact * i;
    //     // x=fact;
    //     i++;
    // }
    // printf("%d! factorial is %d", num, fact);

    // power of number
    // int power, i, x, y;
    // printf("enter your number");
    // scanf("%d %d", &x, &y);
    // power = i = 1;
    // while (i <= y)
    // {
    //     power = power * x;
    //     i++;
    // }
    // printf("%d to the power %d is %d", x, y, power);
    // operator --> tips and traps
    // int x = 4, y = 3, z;
    // // y = --x;
    // z = x-- - y;
    // printf("%d %d %d", x, y, z);

    int n;
    char x[n];
    printf("Enter Size of Your Name:");
    scanf("%d", &n);
    printf("Enter your Name:");
    for (int i = 0; i < n; i++)
    {
        scanf("%c", &x[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%c", x[i]);
    }
    return 0;
}
