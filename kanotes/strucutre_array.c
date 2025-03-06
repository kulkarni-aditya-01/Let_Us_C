#include <stdio.h>
int main ()
{
    struct book 
    {
        int pages ;
        float price ;
        char name[20];
    } ;
    int size = sizeof(struct book);
    printf("%d\n",size);
    struct book book1[3] ;
    for (int i=0 ; i< 3 ; i++)
    {
        printf("Enter the information of the book %d",i+1);
        scanf("%d %f %s",&book1[i].pages,&book1[i].price,&book1[i].name);
    }
    for (int i=0 ; i<3 ; i++)
    {
        printf("%d %f %s is what you inputed to system\n",book1[i].pages, book1[i].price ,book1[i].name);
    }
    return 0;
}