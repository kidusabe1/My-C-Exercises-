#include <stdio.h>
#include <string.h>
int main()
{
    int i_285,j_285,n_285,temp_285;
    char A_285[50], B_285[20];
    printf("Please give your first sentence\n");
    gets(A_285);
    printf("Please give your second sentence\n");
    gets(B_285);
    n_285= strlen(A_285);
    temp_285=0;
    for(i_285=n_285;i_285<49;i_285++)
    {
        A_285[i_285]=B_285[temp_285];
        temp_285++;
    }
    printf("after concatenating....\n");
    puts(A_285);
    A_285[temp_285]='\0';
    return 0;
}