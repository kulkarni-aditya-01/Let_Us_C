#include <stdio.h>

int main()
{
    
    int r=0 , w=0 ;
    int n ;
    printf("enter size of array : ");
    scanf("%d",&n);
    int num[n];
    for (int i = 0 ; i<n ; i++)
    {
        scanf("%d",&num[i]);

    }
    for (int i= 0 ; i<n; i++)
    {
        if ( num [i] == num [n - i - 1])
        r++;
        else
        w++;
    }
    printf("%d are same element\n",r);
    printf("%d are not same",w);
    return 0;
}