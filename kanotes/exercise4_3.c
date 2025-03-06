#include <stdio.h>
int main()
{
    int h, t;
    float c;
    printf("hardness (0-100), carbon(0.0-1.0), tensile(1000-10000)\n");
    printf("scale for good steel in hardness , carbon , tensile:");
    scanf("%d %f %d", &h, &c, &t);
    if (h > 50 && t > 5600 && c > 0.7)
        printf("grade is 10");
    else if (h > 50 && c > 0.7)
        printf("grade is 9");
    else if (c > 0.7 && t > 5600)
        printf("grade is 8");
    else if (h > 50 && t > 5600)
        printf("grade is 7");
    else if (h > 50 || c > 0.7 || t > 5600)
        printf("grade is 6");
    else
        printf("grade is 5");
    return 0;
}