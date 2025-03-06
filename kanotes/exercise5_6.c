#include <stdio.h>
int main ()
{
    int min,max,i,num,n;
    printf("how many numbers?");
    scanf("%d",&n);
    printf("\nenter your 1st number :");
    scanf("%d",&num);
    min=max=num;
    for (i=1;i<=n;i++)
    {
        scanf("%d",&num);
        if(num<min)
        {
            min=num;
        }
        if(num>max)
        {
            max=num;
        }
    }
    printf("Range of your input is %d",max-min);
    return 0;
}