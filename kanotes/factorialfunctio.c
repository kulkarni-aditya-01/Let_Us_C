#include <stdio.h>
int fact(int);  //function prototype
int main ()
{
    int a,b;
    printf("enter your number\n");
    scanf("%d",&a);
    b= fact(a);           //function call
    printf("%d!=%d",a,b);
    return 0;
}
int fact (int a) //function decleration
{
    int x,fact=1;
    for(x=1;x<=a;x++)
    {
        fact=fact*x;
        fact=fact;
    }
    return fact; //return some integer value 
}