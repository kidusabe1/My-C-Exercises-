#include <stdio.h>
int main()
{
    int i_285,j_285,m_285,n_285;
    int A_285[10][10];
    printf("Give the order of your matrix\n");
    scanf("%d%d",&m_285,&n_285);
    for(i_285=0;i_285<m_285;i_285++)
    {
        for(j_285=0;j_285<n_285;j_285++)
        {
            printf("A[%d][%d]=",i_285+1,j_285+1);
            scanf("%d",&A_285[i_285][j_285]);
        }
    }
    printf("Your 2D array is as follows\n");
    for(i_285=0;i_285<m_285;i_285++)
    {
        for(j_285=0;j_285<n_285;j_285++)
        {
            printf("%d\t",A_285[i_285][j_285]);
            if(j_285==n_285-1)
            printf("\n");
        }
    }
    return 0;
}