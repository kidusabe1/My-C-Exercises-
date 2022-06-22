#include <stdio.h>
int main()
{
    int i_285,j_285,m_285,k_285,n_285,A_285[10][10],B_285[10][10],C_285[10][10],D_285[10][10],I_285[10][10],count_285;
    printf("Provide the order of your matrix=>");
    scanf("%d%d",&m_285,&n_285);
    printf("Provide the elements of your matrix\n");
    //storing fresh input
    for(i_285=0;i_285<m_285;i_285++)
    {
        for(j_285=0;j_285<n_285;j_285++)
        {
            printf("A[%d][%d]=",i_285,j_285);
            scanf("%d",&A_285[i_285][j_285]);
        }
    }
    //identity matrix
    for(i_285=0;i_285<m_285;i_285++)
    {
        for(j_285=0;j_285<n_285;j_285++)
        {
            if(i_285==j_285)
            I_285[i_285][j_285]=1;
            else
            I_285[i_285][j_285]=0;
        }
    }
    //storing the transpose in B
    for(i_285=0;i_285<m_285;i_285++)
    {
        for(j_285=0;j_285<n_285;j_285++)
        {
            B_285[i_285][j_285]=A_285[j_285][i_285];
        }
    }
    //Multiplying A with B and storing in C
    for(i_285=0;i_285<m_285;i_285++)
    {
        for(j_285=0;j_285<n_285;j_285++)
        {
            C_285[i_285][j_285]=0;
            for(k_285=0;k_285<n_285;k_285++)
            {
                C_285[i_285][j_285]+=A_285[i_285][k_285]*B_285[k_285][j_285];
            }
        }
    }
        //Multiplying B with A and storing in D
    for(i_285=0;i_285<m_285;i_285++)
    {
        for(j_285=0;j_285<n_285;j_285++)
        {
            D_285[i_285][j_285]=0;
            for(k_285=0;k_285<n_285;k_285++)
            {
                D_285[i_285][j_285]+=B_285[i_285][k_285]*A_285[k_285][j_285];
            }
        }
    }
    count_285=0;
    for(i_285=0;i_285<m_285;i_285++)
    {
        for(j_285=0;j_285<n_285;j_285++)
        {
            if(C_285[i_285][j_285]==D_285[i_285][j_285] && D_285[i_285][j_285]==I_285[i_285][j_285])
            {
                count_285++;
            } 
        }
    }
    if(count_285==(m_285*n_285))
    printf("Your matrix is orthogonal!\n");
    else
    printf("No it is not orthogonal!\n");
    return 0;
}