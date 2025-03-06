#include <stdio.h>
int main()
{
    int num, i;
    printf("enter your no.:");
    scanf("%d", &num);
    i = 2;
    while (i <= num - 1)
    {
        if(num%i==0)
        {
            printf("it is not a prime number");
            break;
        }
        // else
        // {
        //     printf("it is not a prime number");
        //     break;
        // }
        i++;
    }
    if (i==num)
    printf("it is a prime number");
    
    return 0;
}