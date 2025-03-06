#include <stdio.h>
void array_change(int * , int );
int main()
{ 
    int i , num[]={1,23,34,4,5};
     array_change(&num[0] , 5);
    for (i=0 ; i <5 ; i++)
    {
        printf("%d it is array %d th element changed by pointer \n",num[i],i);
        
    }
    // int i = 0;
    // char *ptr;
    // char num[] = {'a', 'b', 'c', 'd'};
    // ptr = &num[i];
    // for (; i < 4; i++) 
    // {
    //     printf("address= %u value= %c\n", ptr, *ptr);
    //     ptr++; //------------>>>>> // using for incrementing array pointer //  <<<<-----------
    // }
    return 0;
}
void array_change(int *num , int n)
{
    for (int i = 0 ; i<n ; i++)
    {
        *num = i + 1 ;
        num ++ ;
    }

}