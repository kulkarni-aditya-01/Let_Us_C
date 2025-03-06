#include <stdio.h>
int main()
// {
//     int sum , k;
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d",j);
//         }
//         printf("\n");
//     }
//     for (int i=4 ; i>=1 ;i--)
//     {
//         k=97;
//         for (int j=1 ; j<=i ; j++)
//         {
            
//             printf("%c",k);
//             k++;
//         }
//         printf("\n");
//     }
//     return 0;






{

    int row , column , i , j;
    printf("Enter your row : ");
    scanf("%d",&row);
    printf("Enter your column :");
    scanf("%d",&column);
    for (i=1 ; i<=row ; i++)
    {
        if (i==1 || i==row)
        {
            for (j=1 ; j<=column ; j++)
            printf("*");
        }
        else
        {
            for (j=1 ; j<= column ; j++)
            {
                if ( j == 1 || j== column)
                printf("*");
                else
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}