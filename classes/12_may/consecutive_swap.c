#include <stdio.h>
#include <string.h>
void swap(char* ptr1_285, char* ptr2_285)
{
    char temp;
    temp = *ptr1_285;
    *ptr1_285= *ptr2_285;
    *ptr2_285= temp;
}
int main()
{
    int i,j,n;
    char *ptr1_285,*ptr2_285,string[20];
    printf("Please give a short string\n");
    gets(string);
    ptr1_285=&string[0]; ptr2_285=&string[1];
    n= strlen(string);
    for(i=0;i<n-1;i++)
    {
        swap(ptr1_285,ptr2_285);
        ptr1_285++;
        ptr2_285++;
    }
    printf("After swapping every two character from left to right\n");
    puts(string);
    return 0;
}