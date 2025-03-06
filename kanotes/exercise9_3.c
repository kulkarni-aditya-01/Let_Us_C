#include <stdio.h>
#include <math.h>
float dist(int, int, int, int);
float area(float, float, float, float);
int main()
{
    int x1, x2, y1, y2, x3, y3;
    float a, b, c, s, A;
    printf("Enter your values of coordinates (x1,y1): ");
    scanf("%d %d", &x1, &y1);
    printf("Enter your values of coordinates (x2,y2): ");
    scanf("%d %d", &x2, &y2);
    printf("Enter your values of coordinates (x3,y3): ");
    scanf("%d %d", &x3, &y3);
    c = dist(x1, y1, x2, y2);
    printf("%f is distance between a & b \n", c);
    a = dist(x2, y2, x3, y3);
    printf("%f is distance between C & b  \n", a);
    b = dist(x1, y1, x3, y3);
    printf("%f is distance between a & c \n", b);
    s = a + b + c / 2;
    A = area(s, a, b, c);
    printf("%f is area of triangle ", A);
    return 0;
}
float dist(int x1, int y1, int x2, int y2)
{
    int x;
    float d;
    x = pow((x1 - x2), 2) + pow((y1 - y2), 2);
    d = sqrt(x);
    return d;
}
float area(float s, float a, float b, float c)
{
    float e, f;
    f = s * (s - a) * (s - b) * (s - c);
    e = sqrt(f);
    return e;
}