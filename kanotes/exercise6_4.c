#include <stdio.h>
#include <math.h>
int main()
{
    float x, y = 0.0;
    int i=1;
    printf("enter your value of x(>=1):\n");
    scanf("%f", &x);
    while (i <= 7)
    {
        y = y + 0.5 * pow(((x - 1) / x), i);
        i++;
    }
    printf("%0.4f",y);
    return 0;
}