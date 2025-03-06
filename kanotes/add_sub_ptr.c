#include <stdio.h>
int main ()
{
    int i , *j;
    float k , *m;
    char c , *d;
    j= &i , m = &k, d= &c;
    // formula is that { ptr+n = ptr + [ n * size of that we are doing operation] }
    printf("ORIGINAL j=%d\nm=%d\nd=%d\n",j,m,d);
    printf("%d\n",++j);
    printf("%d\n",++m);
    printf("%d\n",++d);
    return 0;
}