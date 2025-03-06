#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c;

    printf("enter your sides of triangle : ");
    scanf("%d %d %d", &a, &b, &c);
    if (a == b && b == c)
        printf("triangle is equilateral");
    else if (a == b || b == c || c == a)
        printf("triangle is isosceles");
    else if (pow(a, 2) + pow(b, 2) == pow(c, 2))
        printf("trianghle is right angled triangle");
    else
        printf("triangle is scalene");
    return 0;
}