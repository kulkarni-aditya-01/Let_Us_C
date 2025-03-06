#include <stdio.h>
void modify(int * , int );
int main ()
{
    int num[10]={2,3,4,5,6,7,8,9,10,11};
    modify(&num[0],10);
    for (int i=0 ; i < 10 ; i++)
    {
        printf("%d\t",num[i]);
    }
    return 0;
}
void modify(int *ptr , int n)
{
    for (int i = 0 ; i<n ; i++)
    {
        *ptr = *ptr * 3;
        ptr++;
    }
}