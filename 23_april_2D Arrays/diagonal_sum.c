#include <stdio.h>
int main()
{
    int i_285,j_285,m_285,n_285,sum_285;
    int A_285[10][10];
    printf("Provide the order of the your square matrix\n");
    scanf("%d%d",&m_285,&n_285);
    printf("provide the elements of your matrix\n");
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
    for(i_285=0;i_285<m_285;i_285++)
    {
        for(j_285=0;j_285<n_285;j_285++)
        {
            if(i_285==j_285)
            {
                sum_285=sum_285+A_285[i_285][j_285];
            }
        }
    }
    printf(" sum of your array is %d",sum_285);
}