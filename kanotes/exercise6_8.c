#include <stdio.h>
int main ()
{
    float j;
    int i=1;
    for (i=0;i<=24;i++)
    {
        scanf("%f",&j);
        if (j>=0.00 && j<12.00)
        {
            if (j>=0.00 && j<=4.00)
            printf("It is AM and MIDNIGHT");
            else 
            printf("It is AM");
        }
        else if(j>=12.00 && j<=24.00)
        {
            if(j>12.00 && j<=16.00)
            printf("IT is PM and NOON");
            else
            printf("IT is PM");
        }
    }
    return 0;
}