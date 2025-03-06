#include <stdio.h>
int main ()
{
    char s[100];
    int count=1;
    printf("enter your string here \t");
    fgets(s,sizeof(s),stdin);
    for (int i=0; s[i] !='\0'; i++)
    {
        count++;
    }
    printf("%d",count-=1);
    return 0;
}