#include <stdio.h>
int main()
{
    int a_285[10][10],b_285[10][10],c_285[10][10];
    int i_285,j_285,k_285,m_285,n_285,p_285,q_285;
    printf("Provide the order of the first matrix=>");
    scanf("%d%d",&m_285,&n_285);
    printf("Provide the order of the second matrix=>");
    scanf("%d%d",&p_285,&q_285);
    if(n_285==p_285)
    {
    printf("Provide the elements of the first matrix\n");
    for(i_285=0;i_285<m_285;i_285++)
    {
        for(j_285=0;j_285<n_285;j_285++)
        {
            printf("A[%d][%d]=",i_285,j_285);
            scanf("%d",&a_285[i_285][j_285]);
        }
    }
    printf("Please provide elements of your second matrix\n");
    for(i_285=0;i_285<p_285;i_285++)
    {
        for(j_285=0;j_285<q_285;j_285++)
        {
            printf("b[%d][%d]=",i_285,j_285);
            scanf("%d",&b_285[i_285][j_285]);
        }
    }
        for(i_285=0;i_285<m_285;i_285++)
        {
            for(j_285=0;j_285<q_285;j_285++)
            {
                c_285[i_285][j_285]=0;
                for(k_285=0;k_285<n_285;k_285++)
                {
                    c_285[i_285][j_285]+=a_285[i_285][k_285]*b_285[k_285][j_285];
                }
            }
        }
    printf("The resulting matrix is\n");
    for(i_285=0;i_285<m_285;i_285++)
    {
        for(j_285=0;j_285<q_285;j_285++)
        {
            printf("%d\t",c_285[i_285][j_285]);
            if(j_285==q_285-1)
            printf("\n");
        }
    }
    }
    else
    printf("Multiplication not allowed");
    return 0;
}