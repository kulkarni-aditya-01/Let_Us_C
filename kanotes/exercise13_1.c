#include <stdio.h>
#include <conio.h>
int main ()
{
    int p=0 , n=0 , o=0 , e=0 ,z = 0 ;
    int num [25];
    for (int i=0 ; i < 25 ; i++)
    {
        scanf("%d",&num[i]);
        if (num[i] == 0 )
        z++;
         if ( num [ i ] > 0)
        p++ ;
         if ( num[i] < 0)
        n++;
         if ( num[i] % 2 == 0)
        e++;
         if ( num[i] % 2 != 0)
        o++;
    }
    getch();
    printf("%d are +ve\n",p);
    printf("%d are -ve\n",n);
    printf("%d are even\n",e);
    printf("%d are odd\n",o);
    printf("%d are zeros\n",z);
    return 0;
}
