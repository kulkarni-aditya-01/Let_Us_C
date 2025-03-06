#include <stdio.h>
int main()
{
    int a, b, c, k = 1, n;
    printf("Enter your rows : ");
    scanf("%d", &n);
    for (a = 1; a <= n; a++)
    {
        for (b = 0; b <= n - a - 1; b++)
        {
            printf(" ");
        }

        for (c = 1; c <= a; c++)
        {
            printf("%d ", k);
            k++;
        }
        printf("\n");
    }
    return 0;
}
/*{
    int i,j,k=1,m,n;
    printf("Enter your rows");
    scanf("%d",&n);
    for (i =1; i<=n ; i++)
    {
        for (m=0;m<=n-i-1;m++)
        {
            printf(" ");
        }
        for (j=0;j<=i;j++)
        {
            printf("%d ",k++);
        }
        printf("\n");
    }
    printf("enter your rows ");
    scanf("%d",&n);
    for (i=0;i<=n;i++)
    {
        for(k=0;k<=n-i;k++)
        {
            printf(" ");
        }
        for (j=0;j<=i;j++)
        {
            printf("*");
        }
        for (int z=i-1;z>=0;z--)
        {
            printf("*");
        }
        printf("\n");

    }
    return 0;
}*/
