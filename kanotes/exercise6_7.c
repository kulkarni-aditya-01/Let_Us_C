#include <stdio.h>
#include <math.h>
int main ()
{
    float i=1.0,j=1.0;
    // while (i<13.00)
    // {
    //     j=1.00;
    //     while (j<13.00)
    //     {
    //         if(pow(i,3)+pow(j,3)==1729)
    //         printf("%0.1f^3 + %0.1f^3\n",i,j); 
    //         j++;
    //     }
    //     i++;
    // }
    for (i=1.0;i<13.00;i++)
   {
    for (j=1.0;j<13;j++)
    {
           if(pow(i,3)+pow(j,3)==1729.00)
            printf("%0.1f^3 + %0.1f^3\n",i,j);
    }
   }
    return 0;
}


