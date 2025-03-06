#include <stdio.h>
//int girl_mark ( int * , char , int);
int final_mark (int * , char , int );
int main ()
{
    int sum ;
    printf ("enter the students in class : ");
    int student_number ;
    scanf("%d",&student_number);

    printf("enter the marks as per data : ");
    int mark[student_number] ;
    for(int i=0 ; i<student_number ;i++)
    {
        scanf("%d",&mark[i]);
    }

    char gender ;
    printf("enter your character : g/b ");
    scanf("%c ", &gender);

    int total_mark ;
    total_mark =  final_mark (&mark[0] , gender , student_number  );
    printf("%d",total_mark);
    return 0 ;
}
int final_mark(int mark[] , char gender , int size)
{
    int sum_of_mark = 0 ;
    if (gender == 'b')
    {
    for (int i = 0 ; i<size ; i=i+2)
    {
        sum_of_mark = mark[i] + sum_of_mark;    
        
    }
    }
    else 
    {
       for (int i = 1 ; i<size ; i=i+2)
    {
        sum_of_mark = mark[i] + sum_of_mark;
     
    }  
    }
     return sum_of_mark ;
}