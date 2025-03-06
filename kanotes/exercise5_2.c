#include <stdio.h>
int main()
{
    int i, num, r;
    for (num = 0; num <= 500; num++)
    {
        int sum=0;
        for (i = num; i != 0; i /= 10)
        {
            r = i % 10;
            sum = sum + r * r * r;
        }
        if (sum == num)
            printf("%d is an Armstrong Number\n", num);
        else
            printf("%d is not an Armstrong Number\n", num);
    }
    return 0;
}