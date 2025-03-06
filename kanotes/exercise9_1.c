#include <stdio.h>
void circular(int *, int *, int *);
int main()
{
    int x = 5, y = 8, z = 10;
    circular(&x, &y, &z);
    printf("x=%d, y=%d, z=%d", x, y, z);
    return 0;
}
void circular(int *a, int *b, int *c)
{
    int temp = *c;
    *c = *b;
    *b = *a;
    *a = temp;
}