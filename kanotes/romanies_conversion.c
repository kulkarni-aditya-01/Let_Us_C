#include <stdio.h>
// 50-l 100-c 500-d 1000-m 
int romanies (int, int, char);
int main ()
{
    int yr;
    printf("Enter your year ");
    scanf("%d",&yr);
    yr = romanies(yr,1000,'m');
    yr = romanies(yr,500,'d');
    yr = romanies(yr,100,'c');
    yr = romanies(yr,50,'l');
    yr = romanies(yr,10,'x');
    yr = romanies(yr,5,'v');
    yr = romanies(yr,1,'i');
    return 0;
}
int romanies(int y,int k, char p)
{
    int i,j;
    j = y / k;
    for (i=1;i<=j;i++)
    printf("%c",p);
    return (y%k);
}