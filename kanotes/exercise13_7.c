#include <stdio.h>
#include <math.h>
void area_plot(float *, float *, float *,float *, int);
int main()
{
    float a[6] = {137.4, 155.2, 149.3, 160.0, 155.6, 149.7};
    float b[6] = {80.9, 92.62, 97.93, 100.25, 68.95, 120.0};
    float angle[6] = {0.78, 0.89, 1.35, 9.00, 1.25, 1.75};
    float area[6];
    area_plot(&a[0], &b[0], &angle[0],&area[0], 6);
    float *max = &area[0];
    for (int i = 0; i < 6; i++)
    {
        printf("area of plot %d is %-6.3f\n", i + 1, area[i]);
        if (area[i] > *max)
        {
            *max = area[i];
        }
    }
    printf("largesst area of plot is %-6.3f", *max) ;
    return 0;
}
void area_plot(float *a, float *b, float *angle, float *area , int n)
{
    for (int i = 0; i < n; i++)
    {
        *area = (1.0 / 2) * *a * *b * sin(*angle);
        a++,
        b++,
        angle++,
        area++;
    }
}