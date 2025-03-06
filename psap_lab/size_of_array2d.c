// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    char  key[5][4];
    for (int i=0 ; i<5 ; i++)
    {
        for (int j=0 ; j<4; j++)
        {
            printf("%u %u is the address of %d th row and %d th column and size of each element is %d bytes\n",(key + i),((key+i)+j),i,j,sizeof(key[i]));
        }
    }
    int i;
    printf("%d is size of i",sizeof(i));

    return 0;
}
