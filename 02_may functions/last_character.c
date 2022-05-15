#include <stdio.h>
#include <string.h>
int main()
{
    int i_285,len_285;
    char A_285[30];
    printf("Please provide a short sentence\n");
    gets(A_285);
    len_285= strlen(A_285);
    for(i_285=0;i_285<(len_285+1);i_285++)
    {
        if(A_285[i_285]==' ' || A_285[i_285]=='\0')
        {
            printf("%c ",A_285[i_285-1]);
        }
    }
    return 0;
}