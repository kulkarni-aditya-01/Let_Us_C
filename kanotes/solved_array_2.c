#include <stdio.h>
int main()
{
    int org[5] = {1, 2, 3, 4, 5};
    int copy[5];
    for (int i = 0,j=0; i < 5; i++,j++)
    {
        copy[j] = org[i];
    }
    for (int j = 4; j >= 0; j--)
    {
        printf("%d\n", copy[j]);
    }
    return 0;
}