#include <stdio.h>
int main()
{
    float sal;
    printf("enter your salary");
    scanf("%f", &sal);
    (sal >= 15000 && sal < 25000) ? printf("Accounter") : printf("Manager");
    return 0;
}