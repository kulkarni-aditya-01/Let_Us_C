#include <stdio.h>
int main ()
{
    int num;
    printf("enter your number");
    scanf("%d",&num);
    if(num<0)
    printf("%d",num=num*(-1));
    else if(num>=0)
    printf("%d",num);
    else 
    printf("nothing is same ");
    return 0;
}