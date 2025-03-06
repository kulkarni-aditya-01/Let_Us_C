#include <stdio.h>
int main ()
{
    int i , j, n, temp;
    printf("Enter your array size :");
    scanf("%d",&n);
    int arr[n];
    printf("Enter your array : ");
    for (i=0 ; i<n ; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=n-1 , j=0 ; j<n ; j++ , i--)
    {
        temp = arr[i];
        arr[j]=arr[i];
        arr[n-i-1]=temp;
        printf("%d",arr[j]);
    }
    return 0;
}