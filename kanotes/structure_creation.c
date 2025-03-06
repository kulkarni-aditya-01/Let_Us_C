#include <stdio.h>
int main ()
{
    struct book1  
    {
        char name [10];
        int pages ;
        float price ; // sequence of this definening is not matter in this data type for access it matters with its syantx.
    }book ;
     scanf("%s %d %f",&book.name , &book.pages ,&book.price);
     printf("%s %d %f",book.name ,book.pages ,book.price);//  This is the wrong way to define the structure data type because i was not mentioned the variable for the data type to acces the information for it .  Define a vriable to each and every structure. Remember the use of it 
    // (.) is used to access the data type stored in that varibale through structure data type 

    return 0;
}