#include <stdio.h>
#include <math.h>
float mean(int [], int );
void std_dev(int *, int , float );
int main ()
{
    int num[15]={-6,-12,8,13,11,6,7,2,-6,-9,-10,11,10,9,2};
    float i;
    i = mean(&num[0],15);
    printf("%f is mean\n",i);
    std_dev(&num[0],15,i);
    return 0;
}
float mean(int ptr[],int n )
{
    float m = 0,x ;
    for (int i=0;i<n;i++)
    {
        m = m + ptr[i];
    }
    x = m / n;
    return x;
}
void std_dev( int *ptr , int n, float i)
{
    float std=0 ;
    for (int i=0 ; i<n ; i++)
    {
        std = std + (sqrt(pow ((*ptr - i),2))) / n; 
        ptr++ ;
    }
    printf("%f is standard deviation",std);
}