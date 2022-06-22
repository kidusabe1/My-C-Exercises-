#include <stdio.h>
#include <string.h>
int main()
{
    int i_285,len_285;
    char A_285[30],B;
    printf("Please provide a short sentence\n");
    gets(A_285);
    len_285= strlen(A_285);
    printf("Which letter do you want to replace\n");
    scanf("%c",&B);
    for(i_285=0;i_285<=len_285;i_285++)
    {
        if(A_285[i_285-2]>=0 && A_285[i_285]==B && A_285[i_285-2]!=' ')
            A_285[i_285]=A_285[(i_285-2)];
    }
    puts(A_285);
    return 0;
}