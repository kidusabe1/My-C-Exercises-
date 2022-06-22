#include <stdio.h>
#include <string.h>
int main()
{
    int i_285,j_285,temp_285,n_285;
    char A_285[30];
    printf("please give a string\n");
    gets(A_285);
    n_285= strlen(A_285);
    for(i_285=0;i_285<(n_285-1);i_285++)
    {   
        for(j_285=(i_285+1);j_285<n_285;j_285++)
        {
            if(A_285[i_285]<A_285[j_285])
            {
                temp_285= A_285[j_285];
                A_285[j_285]=A_285[i_285];
                A_285[i_285]=temp_285;
            }
        }
    }
    for(i_285=0;A_285[i_285]!='\0';i_285++)
    {
        printf("%c ",A_285[i_285]);
    }
}