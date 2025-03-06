#include <stdio.h>
#include <math.h>
int main()
{
   int a,b,c;
   int x,t;
   for(a=1;a<=30;a++)
   {
        b=1;
        for(b=1;b<=30;b++)
        {
            c=1;
            for(c=1;c<=30;c++)
            {
                x = a*a +b*b ;
                t = c*c;
                if (x==t)
                printf(" %d %d %d\n",a,b,c);
            }
        }
   }
    return 0;
}
