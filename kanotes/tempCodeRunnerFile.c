#include <stdio.h>
#define int j , i;

void print (int number[][j] , int , int);
int main ()
{
    printf("Enter the size of array : ");
    scanf ("%d %d", &i , &j);
    int number [i][j]; 
    for (int x=0 ; x < i ;x++)
    {
        for (int y=0 ; y<j ; y++)
        {
            scanf ("%d",number[x][y] );
        }
    }
    print(number , i ,j);
}
void print (int number[][j] , int row , int col )
{
    int x , y ;
    for (x=0 ; x<row ; x++)
    {
        for (y=0 ; y<col ; y++)
        {
            printf("%d",number[x][y]);
        }
    }

}