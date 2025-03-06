#include <stdio.h>
int main()
{
    int x, i, r, p, n, z;
    p = z = n = 0;
    printf("How many numbers do you want to check ?\n ");
    scanf("%d", &x);
    r = 1;
    while (r <= x)
    {
        scanf("%d", &i);
        if (i > 0)
        {
            p++;
        }
        else if (i < 0)
        {
            n++;
        }
        else
        {
            z++;
        }
        r++;
    }
    printf("\n%d are positive \n %d are negative \n %d are zeroes", p, n, z);
    return 0;
}