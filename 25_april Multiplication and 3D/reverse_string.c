#include <stdio.h>
#include <string.h>
int main()
{
    int n_285,i_285;
    char A_285[30];
    printf("Give a string\n");
    gets(A_285);
    n_285= strlen(A_285);
    printf("The reverse of your string is=>\n");
    for(i_285=n_285-1;i_285>=0;i_285--)
    {
        printf("%c",A_285[i_285]);
    }
    return 0;
}