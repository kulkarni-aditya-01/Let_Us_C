#include <stdio.h>
#include <math.h>
int main()
{
    float w, h, bmi;
    printf("enter your weight and height :");
    scanf("%f %f", &h, &w);
    bmi = w / pow(h, 2);
    if (bmi < 15)
        printf("starvation");
    else if (bmi > 15 && bmi < 17.6)
        printf("anoxeric");
    else if (bmi > 17.5 && bmi < 18.6)
        printf("underweight");
    else if (bmi > 18.5 && bmi < 25.0)
        printf("ideal");
    else if (bmi > 24.9 && bmi < 30)
        printf("overweight");
    else if (bmi > 30 && bmi < 31)
        printf("obese");
    else
        printf("morbidly obese");
    return 0;
}