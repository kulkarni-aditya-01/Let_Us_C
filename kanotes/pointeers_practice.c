#include <stdio.h>
void large(int *, int *, int *);
int main()
{
    // int i = 5;
    // int *j , **k;
    //  j = &i;
    //  k = &j ;
    //  printf("address of i = %u\n",&i);
    //  printf("address of i = %u\n",j);
    //  printf("address of i = %u\n",*k);
    //  printf("address of j = %u\n",&j);
    //  printf("address of j = %u\n",k);
    //  printf("address of k = %u\n",&k);
    //  printf("value of i = %d\n",i);
    //  printf("value of i = %d\n",*(&i));
    //  printf("value of i = %d\n",*j);
    //  printf("value of i = %d\n",**k);
    int i, j, k;
    scanf("%d %d %d", &i, &j, &k);
    large(&i, &j, &k);
    return 0;
}
void large(int *i, int *j, int *k)
{
    int max = *i;
    if (max < *j)
        max = *j;
    else if (max < *k)
        max = *k;
    printf("%d", max);
}