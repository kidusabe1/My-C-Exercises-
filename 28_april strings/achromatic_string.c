#include <stdio.h>
int main()
{
    int i_285,len_285;
    char A_285[30],space_285,first_285;
    printf("provide a short sentence\n");
    gets(A_285);
    printf("%c",A_285[0]);
    for(i_285=0;A_285[i_285]!='\0';i_285++)
    {
        if(A_285[i_285]==' ')
        {
            i_285++;
            printf("%c",A_285[i_285]);
        }
    } 
    return 0;
}