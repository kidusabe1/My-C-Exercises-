#include <stdio.h>
#include <string.h>
int main()
{
    int i_285,j_285,n_285;
    char A_285[100][30],temp_285[30];
    printf("Please provide the number of names\n");
    scanf("%d",&n_285);
    printf("please give your list of names\n");
    for(i_285=0;i_285<n_285;i_285++)
    {
        scanf("%s",A_285[i_285]);
    } 
    
    for(i_285=0;i_285<n_285;i_285++)
    {   
        for(j_285=(i_285+1);j_285<n_285;j_285++)
        {
                if(strcmp(A_285[i_285],A_285[j_285])>0)
                {
                
                    strcpy(temp_285,A_285[j_285]);
                    strcpy(A_285[j_285],A_285[i_285]);
                    strcpy(A_285[i_285],temp_285);
                }       

        }
    }
    printf("The sorted list is down below\n");
    printf("==============================\n");
    for(i_285=0;i_285<n_285;i_285++)
    {
        printf("%s",A_285[i_285]);
        printf("\n");
    }
}