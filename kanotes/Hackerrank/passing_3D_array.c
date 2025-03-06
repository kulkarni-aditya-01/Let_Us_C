#include <stdio.h>
void threed(int (*q)[4][5] , int slices , int row ,int column );
int main (void)
{
    int array[3][4][5];
    array  = {{ {1,2,3,4,5} , {1,2,3,4,5} ,{1,2,3,4,5}, {1,2,3,4,5} }, 
                        {{1,2,3,4,5} , {1,2,3,4,5} ,{1,2,3,4,5}, {1,2,3,4,5} },
                        {{1,2,3,4,5} , {1,2,3,4,5} ,{1,2,3,4,5}, {1,2,3,4,5} }} ;
    threed(array,3,4,5);
    return 0 ;
}
void threed ((int *q)[4][5] , int slices , int row , int column  )
{
    int *p ;
    for (int k=0 ; k< slices ; k++)
    {
        for (int i =0 ; i<row ; i++)
        {  p = q [k][i] ;
            for (int j=0 ; j<column ; j++)
            {
                printf("%d",*(p+j))
                
            }
            printf("\n");
        }
        printf("\n");
    } 
}