#include <stdio.h>
void leap(int);
int main ()
{
    int yr ; 
    printf("Enter your year");
    scanf("%d",&yr);
    leap(yr);
    return 0;
}
void leap(int yr)
{
 if(yr%4 == 0 || yr%400==0)
 {
    printf("It is leap year");
 }
 else 
 printf("it is not leap year ");
}