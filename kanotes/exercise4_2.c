#include <stdio.h>
int main()
{
    int k, w, c, y, m;
    int r, g, b;
    printf("give your values for r g b :");
    scanf("%d%d%d", &r, &g, &b);
    if (r && g && b > 0 && r && g && b < 255)
    {
        w = max(r / 255, g / 255, b / 255);
        printf("%d", &w);
        c = (w - (r / 255)) / w;
        printf("%d", &c);
        m = (w - (g / 255)) / w;
        printf("%d", &m);
        y = (w - (b / 255)) / w;
        printf("%d", &y);
    }
    else
    {
        k = 1;
        printf("%d", k);
    }
    return 0;
}