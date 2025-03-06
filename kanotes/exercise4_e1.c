#include <stdio.h>
int main()
{
    char a;
    printf("enter your character:");
    scanf("%c", &a);
    // if (a > 96 && a < 123)
    //     printf("it is loweer case character ");
    // else if (a <= 47 && a >= 0 && a >= 58 && a <= 64 && a >= 91 && a <= 96 && a >= 123 && a <= 127)
    //     printf("it is special symbol");
    // else if (a >= 65 && a <= 90)
    //     printf("it is upper case character");
    // else
    //     printf("it is integer");
    // USING CONDITIONAL OPERATOR :
    a > 96 && a < 123 ? printf("it is lower case\n") : printf("invalid\n");
    (a <= 47 && a >= 0 && a >= 58 && a <= 64 && a >= 91 
    && a <= 96 && a >= 123 && a <= 127)?printf("it is a special symbol"):printf("invalid");
    return 0;
}
// we can also nested conditional operator (ternary operator); 