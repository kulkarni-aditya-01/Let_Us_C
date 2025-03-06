#include <stdio.h>
int main()
{
    int min, m, n, found = 0 , def;
    scanf("%d", &n);
    int num1[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num1[i]);
    }
    scanf("%d", &m);
    int num2[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &num2[i]);
    }
     int num [m];
    
    if (n>m || n==m )
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (num1[i] == num2[j])
                {
                    num[i] = num1[i];
                    found++;
                }
            }
        }
    }
    else 
    {
        for (int j = 0; j < m; j++)
        {
            for (int i = 0; i < n ; i++)
            {
                if (num1[i] == num2[j])
                {
                    num[i] = num1[i];
                    found++;
                }
            }
        }
    }
    min = num[0];
    if (found != 0)
    {
        for (int i = 0; i < m ; i++)
        {
            if (num[i] <= min)
            {
                min = num[i];
            }
        }
        printf("%d", min);
    }
    else
    {
        printf("%d", -1);
    }
    return 0;
}