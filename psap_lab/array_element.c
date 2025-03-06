#include <stdio.h>
void array1(int * , int  );
//void array2(int [], int );
int main ()
{
    int i , num[]={2,3,4,5,6};
    array1(&num[0],5);
   // array2(&num[i],5);
    return 0;
}
void array1 (int *num ,int  n)
{
    for (int i = 0 ; i < n ; i++)
    { 
        printf("%d\n",*num);
        num++;
        // ------->>> // this is due to continous memory allocation // <<<<------- //
    }
}