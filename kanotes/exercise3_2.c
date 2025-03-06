#include <stdio.h>
int main()
{
    int a1,a2,a3;
    printf("give your ages:");
    scanf("%d %d %d",&a1,&a2,&a3);
    if (a1>a2&&a1>a3)
    printf("RAM is older");
    else if (a2>a1&&a2>=a3)
    printf("SHAM is older");
    else if (a3>=a1&&a3>a2)
    printf("AJAY is older");
    else 
    printf("no one is older");
    return 0;
}