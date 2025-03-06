// some error in this method , learn it according to the C99
#include <stdio.h>
void show(int (*number)[j], int row, int col);
int main()
{
    int i, j;
    printf("Enter the size of array :" );
    scanf ("%d %d", &i ,&j);
    int number[i][j];
    for (int x= 0 ;x<i; x++)
    {
        for (int y=0 ; y<j;y++)
        {
            scanf("%d",&number[x][y]);
        }
    }
    show(number , i , j );
}
void show (int (*number)[j], int row , int col )
{
    int i , e ;
    int *p; 
    for (i=0 ; i<row ; i++)
    {
        p = number + i;
        for (e=0 ; e<col ;e++)
        {
            printf("%d\t" ,*(p+e));
        }
    }
}