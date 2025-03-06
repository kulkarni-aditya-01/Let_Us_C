#include <stdio.h>
int main()
{
    int *min, *p, num[5];
    for (int i = 0; i < 5; i++)
    {
        printf("%d th  element is : ", i);
        scanf("%d", &num[i]);
        printf("\n");
    }
    min = &num[1];
    p = &num[0];
    for (int i = 0; i < 5; i++)
    {
        if (*min > *p)
        {
            *min = *p;
            p++;
        }
        else 
        p++;
    }
    printf("%d is minimum", *min);
    return 0;
}