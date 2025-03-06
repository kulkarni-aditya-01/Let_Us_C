#include <stdio.h>
int main ()
{
    int n,sum=0,rem,original;
    printf("enter your number");
    scanf("%d",&n);
    original=n;
    for (int i=n ; n !=0 ; n/=10)
    {
        rem = n % 10;
        sum=sum*10+rem;
    }
    printf("%d\n",sum);
    if(sum == original)
    printf("%d is palindrome",original);
    else 
    printf("%d is not palindrome ",original);
    return 0;
}