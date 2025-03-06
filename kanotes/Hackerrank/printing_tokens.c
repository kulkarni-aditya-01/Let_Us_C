#include <stdio.h>
#include <string.h>
void word(char *string)
{
    while (*string != '\0')
    {
        if (*string == 32)
        printf("\n");
        else
        printf("%c",*string);
        string++;
    }
}
int main ()
{
    char string[100];
    for (int i=0 ; i<100 ; i++)
    {
        scanf ("%c",&string[i]);
    }
    word(string);
    return 0;
}