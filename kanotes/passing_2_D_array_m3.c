#include <stdio.h>
 void print(int m, int n,int number[m][n]);
int main()
{
    int row,col;
    printf("Enter the size of array : ");
    scanf("%d %d", &row, &col);
    int number[row][col];
    for (int x = 0; x < row; x++)
    {
        for (int y = 0; y < col; y++)
        {
            scanf("%d", number[x][y]);
        }
    }
    print(row,col,number);  
} 
void print(int m, int n,int number[m][n])
{
    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d", number[i][j]);
        }
    }
}