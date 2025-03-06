#include <stdio.h>
void extract(char * , int position , int number  );
int main ()
{
    int n , position ,number ;
    printf("Enter the total character in the string : ");
    scanf("%d",&n);
    char name[n] ;
    scanf(" %s",name);
    printf("Enter the position from where to be extracted and the total character to be extarcted :");
    scanf("%d %d",&position,&number);
    extract(name , position ,number );
    printf("\n");
    return 0;
}
void extract(char *main_name , int position , int number  )
{
    char extracted_name[number+1] ;
    int i =0 ;
    while (i<number)
    {
        main_name = main_name + position + 1;
        extracted_name[i] = *main_name ;
        main_name++ ;
        extracted_name+i ++ ;
        i++ ;
    }
    *extracted_name = '\0' ;
    printf("%s",extracted_name);
    
}