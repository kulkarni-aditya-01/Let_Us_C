#include <stdio.h> // doubt is that how to print largest number ????
int main()
{
    int a, b, c;
    printf("Enter your three numbers ");
    scanf("%d %d %d", &a, &b, &c);
if (a>b && a > c )
printf("%d",a);
else if ( a<b && c<b)
printf("%d",b);
else 
printf("%d",c);
}
