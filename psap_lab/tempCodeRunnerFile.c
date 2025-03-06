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