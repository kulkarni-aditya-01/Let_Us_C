#include <stdio.h>
int main ()
{
    int a , b ,sum,n ;
    printf("Enter your number for fibonnaci series : ");
    scanf("%d",&n);
    for (int i=1 ; i<=n ;i++)
    {
         a=0 , b=1 ,sum=0;
        for (int j=1 ; j<= i; j++ )
        {
            sum = a + b ;
            printf("%d\t",sum);
            a = b ;
            b =sum ;
        }
        printf("\n");
    }
    return 0;
}