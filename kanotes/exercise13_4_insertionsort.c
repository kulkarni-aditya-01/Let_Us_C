#include <stdio.h>
int main ()
{
    int k=5;
    int num [k],t;
    printf("start to write down details :");
    for (int l = 0 ;l<k ; l++)
    {
        scanf("%d",&num[l]);
    }
    
    for(int n=0 ; n<k ; n++) //-------->>> it is used for iteration to sort out array
    {
        for (int i=0 ; i<5 ; i++) // ---------->>>> it is used for sort out single element in array 
    {
        if (num[i]>num[i+1])
        {
            t= num[i]; ///----------->>>> this is traditional method for doing sort out 
            num[i]= num[i+1];
            num[i+1]= t;
        }
    }
    }
    for (int i=0;i<5;i++)
    {
        printf("%d\t",num[i]);
    }
    return 0;
}