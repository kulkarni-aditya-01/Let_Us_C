#include <stdio.h>
struct student
{
    int roll_no;
    char name[10];
    float marks ;
}s1,s2,s3;
int main ()
{
    struct student s1={1,"aditya",90.91};
    struct student s2={2,"bapu",100};
    struct student s3={3,"sarthak",99.99};
    printf("%d %s %0.3f\n",s1.roll_no,s1.name,s1.marks);
    printf("%d %s %0.3f\n",s2.roll_no,s2.name,s2.marks);
    printf("%d %s %0.3f\n",s3.roll_no,s3.name,s3.marks);
    return 0;
}