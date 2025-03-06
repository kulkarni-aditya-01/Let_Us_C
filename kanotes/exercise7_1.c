#include <stdio.h>
int main ()
{
    int class,grace=5,fail;
    printf("enter your class and failed subject :");
    scanf("%d %d",&class,&fail);
    swtich ( class & fail)
    {
        case ( 1 && 1):
        case (1 && 2):
        printf("You got grace of 5 marks");
    }
    return 0;
}