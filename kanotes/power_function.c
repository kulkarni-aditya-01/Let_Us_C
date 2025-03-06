#include <stdio.h>
float power(float, int);
 int main()
{
    float a;
    int b;
    float p;
    printf("enter your number: \n");
    scanf("%f %d", &a, &b);
    p = power(a, b);
    printf("%f raised to %d = %0.4f", a, b, p);
    return 0;
}
float power(float a, int b)
{
    int i=1;
    float pow = 1;
    while (i <= b)
    {
        pow = pow * a;
        i++;
    }
    return (pow);
}