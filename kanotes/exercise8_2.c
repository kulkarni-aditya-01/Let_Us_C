// DOUBT DOUBT DOUBT DOUBT 
#include <stdio.h>
void prime(int);
int main ()
{
    int x,k;
    printf("Enter your number");
    scanf("%d",&x);
    if(x<=0)
    printf("please enter positive number");
    if(x>0)
    prime(x);
    return 0;
}
void prime(int x)
{
    while (x%2 == 0)
    {
       printf("%d\t",2); 
       x/=2 ;
    }
    for (int i = 3 ; i<=x ; i+=2)
    {
        while (x%i == 0)
        {
            printf("%d\t",i);
            x =x/i;
        }
    }
}