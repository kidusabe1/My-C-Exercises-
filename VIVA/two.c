#include <stdio.h>
#include <string.h>
int main()
{
    int i,n;
    char str[1000];
    printf("Please give a short sentence\n");
    gets(str);
    n= strlen(str);
    printf("\n");
    printf("+++++++Every first character of the words in your sentence are as follows+++++++++++++++\n");
    printf("\n");
    printf("%c ",str[0]);
    for(i=0;i<n;i++)
    {
        if(str[i]==' ')
        {
            printf("%c ",str[i+1]);
        }
    }
    return 0;
}