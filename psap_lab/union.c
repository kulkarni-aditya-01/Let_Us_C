#include <stdio.h>
union random
{
    int a;
    float b;
    float c;
};
int main()
{
    union random u; // u is object for accessing member of union
    u.a = 2;
    printf("%d ",u.a);
    u.b = 34.4;
    printf("%f ",u.b);
    u.c = 89.90;
    printf("%f ",u.c);
    return 0;
}