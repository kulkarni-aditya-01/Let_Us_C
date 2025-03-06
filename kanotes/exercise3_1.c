#include <stdio.h>
int main()
{
    int num, d1, d2, d3, d4, d5, sum;
    printf("enter your five digit number [checking it is palindrone or not ?]\n");
    scanf("%d", &num);
    d1 = num % 10;
    num /= 10;
    d2 = num % 10;
    num /= 10;
    d3 = num % 10;
    num /= 10;
    d4 = num % 10;
    num /= 10;
    d5 = num % 10;
    sum = d1 * 10000 + d2 * 1000 + d3 * 100 + d4 * 10 + d5 * 1;
    if (num == sum)
        printf("it is palindrone");
    else
        printf("it is not palindrone");
        return 0;
}
