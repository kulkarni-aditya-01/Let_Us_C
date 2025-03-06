#include <stdio.h>
int main()
{
    int i, j, n;
    printf("number which you want to print table ?");
    scanf("%d", &n);
    for (i = 1; i <= 10; i++)
    {
        j = n * i;
        printf("%d*%d = %d\n",n,i,j);
    }
    return 0;
}