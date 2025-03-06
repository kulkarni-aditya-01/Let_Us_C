#include <stdio.h>
int main()
{
    int n, count=0 , num[5];
    for (int i=0 ; i<5 ; i++)
    {
        printf("ENTER ELEMENT %d : ",i+1);
        scanf("%d",&num[i]);
    }
    printf("\n");
    printf("entry no. for checking : ");
    scanf("%d",&n);
    for (int i=0;i<5;i++)
    {
        if (num[i]==n)
        count++;
    }
    printf("%d times come in array",count);
    return 0;
}