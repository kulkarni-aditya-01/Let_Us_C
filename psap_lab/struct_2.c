#include <stdio.h>
struct student 
{
    int roll_no;
    char name[20];
    float marks ;
};
struct student s[5];
int main()
{
    for (int i=0 ; i<5;i++)
    {
        printf("enter student details of %d : ",i+1);
        scanf("%d %s %f",&s[i].roll_no,&s[i].name,&s[i].marks);
    }
    for (int i=0 ; i<5 ; i++)
    {
        struct student *ptr=&s[i];
        printf("%d %s %f is info of student %d\n",ptr->roll_no,ptr->name,ptr->marks,i+1);
    }
    return 0;
}