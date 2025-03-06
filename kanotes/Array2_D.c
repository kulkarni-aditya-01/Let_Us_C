#include <stdio.h>
int main ()
{
    int  stu[5][2] = {  {1234 , 50} , {1235 , 51}, {1236 ,52}, {1237 , 53} , {1238 , 54}} ;
    for (int i = 0 ; i<5 ; i++)
    {
        printf("Address of %d the 1-D array is %u \t",i , stu[i]);
        printf("And size is %d\n",sizeof(stu[i]));
    }
    
    printf ("\n");
    for (int i=0 ; i<5;i++)
    {
        printf("\n");
        for (int j=0 ; j<2 ;j++)
        {
            printf("%d ",*(*(stu + i )+j));
        }
    }
    return 0; 
}