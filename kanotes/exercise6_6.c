#include <stdio.h>
int main ()
{
    int i=100000,p=9,j,r;
    while (i != 0 && p!=0)
    {
        j = (i * 10)/100;
        r = i-j;
        printf("at %d year population is %d\n",p,r);
        i = r;
        p--;
    }
    return 0;
}