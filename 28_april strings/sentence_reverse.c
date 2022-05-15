#include <stdio.h>
#include <string.h>
int main()
{
    int i_285,j_285,n_285,wrd;
    printf("How many words does your sentence have?\n");
    scanf("%d",&wrd);
    char A_285[30][30];
    printf("Please provide a sentence\n");
    for(i_285=0;i_285<wrd;i_285++)
    {
        scanf("%s",A_285[i_285]);
    }
    for(i_285=0;i_285<wrd;i_285++)
    {
        n_285=strlen(A_285[i_285]);
        for(j_285=(n_285-1);j_285>=0;j_285--)
        {
            printf("%c",A_285[i_285][j_285]);
        }
        printf(" ");
    }    
}