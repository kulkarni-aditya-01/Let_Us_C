#include <stdio.h>
int main()
{
    int x, y, z;
    printf("enter your angle");
    scanf("%d %d %d", &x, &y, &z);
    if (x + y + z == 180)
        printf("Triangle is valid");
    else
        printf("triangle is not valid");
    return 0;
}