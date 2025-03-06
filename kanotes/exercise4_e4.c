#include <stdio.h>
#include <math.h>
int main ()
{
    float a ;
    int x;
    printf("enter your angle");
    scanf("%f",&a);
    x = pow(sin(a),2)+pow(cos(a),2);
    if(x==1)
    printf("it is true identity");
    else 
    printf("it is false identity");
    return 0;
}