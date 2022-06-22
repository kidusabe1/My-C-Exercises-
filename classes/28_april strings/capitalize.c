#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    int i_285,j_285,len_285;
    char A_285[30];
    printf("please give a short sentence\n");
    gets(A_285);
    len_285= strlen(A_285);
    for(i_285=0;A_285[i_285]!='\0';i_285++)
    {
        if(A_285[i_285]==' ')
        {
            A_285[i_285+1]=A_285[i_285+1]-32;
        }
        else if(i_285==0)
        {
            A_285[i_285]=A_285[i_285]-32;
        }
    }
    puts(A_285);
    return 0;
}