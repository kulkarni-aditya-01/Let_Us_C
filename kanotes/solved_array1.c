#include <stdio.h>
int main ()
{
    int num[]={1,2,3,4,5,6,7,8,9,10};
    int t;
    for (int i = 0 ; i<10 ; i=i+2) // because we just interchange only adjacent element
    {
        t=num[i];         // traditional method for sort out 
        num[i]=num[i+1];  // used it for sort out only adjacent array
        num[i+1]=t;
    }
    for (int i=0 ; i<10 ; i++)
    printf("%d\t",num[i]);
    return 0;
} 