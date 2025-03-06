#include <stdio.h>
#include <string.h>

int main()
{
    int count = 0, n;
    scanf("%d", &n);
    char name[n];
    printf("Enter your array: ");
    scanf("%s", name);
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    printf("%d\n", count);
    for (int i = 0; i < count / 2; i++)
    {
        char temp = name[i];
        name[i] = name[count - i - 1];
        name[count - i - 1] = temp;
    }

    printf("Reversed array: %s\n", name);

    return 0;
}
