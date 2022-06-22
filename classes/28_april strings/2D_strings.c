#include <stdio.h>
#include <string.h>
int main()
{
    char A_285[3][10];
    int i_285,j_285,n;
    printf("Please give 3 words\n");
    for(i_285=0;i_285<3;i_285++)
    {
        scanf("%s",A_285[i_285]);
    }
    printf("Your words are as follows\n");
    for(i_285=0;i_285<3;i_285++)
    {
            printf(" %s ",A_285[i_285]);
            printf("\n");
    }
    return 0;
}