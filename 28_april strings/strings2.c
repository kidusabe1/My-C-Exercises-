#include <stdio.h>
#include <string.h>
int main()
{
    int i_285,flag_285=0;
    char A_285[50],och_285,nch_285;
    printf("Please provide a short sentence\n");
    gets(A_285);
    printf("give old character\n");
    scanf("%c", &och_285);
    printf("give new character\n");
    scanf("%c", &nch_285);
    printf("Your sentence before replacing is=\n");
    puts(A_285);
    for(i_285=0; A_285[i_285]!='\0' ;i_285++)
    {
        if(A_285[i_285]==och_285)
        {
            A_285[i_285]=nch_285;
            flag_285=1;
        }
    }
    if(flag_285==1)
    {
        printf("Your sentence after replacing is=\n");
        puts(A_285);
    }
    else
        printf("%c is not in your sentence\n",och_285);

}