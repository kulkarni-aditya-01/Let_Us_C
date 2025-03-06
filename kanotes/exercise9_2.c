#include <stdio.h>
void conversion(float *);
int main()
{
    float weight;
    printf("enter your weight in kilograms : ");
    scanf("%f", &weight);
    conversion( &weight );
    return 0;
}
void conversion(float *weight)
{
    int gram, tons, pounds;
    *weight = *weight * 1000;
    printf("%0.3f grams\n", *weight);
    *weight = *weight / 1000000;
    printf("%0.3f tons \n",*weight);
    *weight  = *weight * 2000;
    printf("%0.3f pounds\n",*weight); 
}