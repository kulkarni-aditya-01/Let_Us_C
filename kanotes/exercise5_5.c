// decimal to octal conversion
#include <stdio.h>
int main ()
{
    int i,num,sum=0,r=1,term=0,t,y=r;
     int x;
    printf("enter your number to get its octal equialent :");
    scanf("%d",&num);
    while (num!=0)
    {
        i = num%8;
        sum = sum + i*r;
        num/=8;
        r*=10;
    }
    printf("%d is ocatl equivalent\n",sum);

// decimal to binary conversion
scanf("%d",&t); 
 while (t!=0)
    {
        x= t%2;
        term = term + x*y;
        t/=2;
        y*=10;
    }
    printf("%d is binary equivalent",term);
    return 0;
}