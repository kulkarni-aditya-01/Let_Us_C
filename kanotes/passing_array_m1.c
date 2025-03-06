// here i am using the base address of 2-D array to accesing the whole 2-D array , but it shows the incompatible error due to the my paassing argumetent is not matched with the data type 
// so int this method i used the base address of 2-D array ||||||
#include <stdio.h>
void display (int * , int  , int );
int main ()
{
    int i , j ;
    printf("Given your size of 2-D array : ");
    scanf("%d %d",&i,&j);
    int number[i][j] ;
    for (int x = 0 ; x<i ; x++)
    {
        for (int y=0 ; y<j ; y++)
        {
            scanf("%d",&number[x][y]);
        }
    }
    display (number , i , j);

}
void display (int *number , int row , int col)
{
    int i , j ;
    for (i=0 ; i<row ;i++)
    {
        for (j=0 ; j<col ; j++)
        {
            printf("%d ", *(number+ i*col + j));
            printf("\t");
        }
        
    }
}