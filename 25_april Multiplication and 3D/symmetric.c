#include <stdio.h>
int main()
{
    int i_285,j_285,m_285,n_285,A_285[10][10],B_285[10][10],count_285;
    printf("Provide the order of your square matrix=>");
    scanf("%d%d",&m_285,&n_285);
    printf("Give the elements of your square matrix=>\n");
    //taking a fresh input
    for(i_285=0;i_285<m_285;i_285++)
    {
        for(j_285=0;j_285<n_285;j_285++)
        {
            printf("A[%d][%d]=",i_285,j_285);
            scanf("%d",&A_285[i_285][j_285]);
        }
    }
    //Storing the transpose of the input matrix in B
    for(j_285=0;j_285<n_285;j_285++)
    {
        for(i_285=0;i_285<m_285;i_285++)
        {
            B_285[i_285][j_285]=A_285[j_285][i_285];
        }
    }
    //printing the matrix
    printf("Your matrix is\n");
    for(i_285=0;i_285<m_285;i_285++)
    {
        for(j_285=0;j_285<n_285;j_285++)
        {
            printf("%d\t",A_285[i_285][j_285]);
            if(j_285==(n_285-1))
            printf("\n");
        }
    }
    //printing the transpose matrix
    printf("The transpose of your matrix is\n");
    for(i_285=0;i_285<m_285;i_285++)
    {
        for(j_285=0;j_285<n_285;j_285++)
        {
            printf("%d\t",B_285[i_285][j_285]);
            if(j_285==(n_285-1))
            printf("\n");
        }
    }
    count_285=0;
    for(i_285=0;i_285<m_285;i_285++)
    {
        for(j_285=0;j_285<n_285;j_285++)
        {
            if(B_285[i_285][j_285]==A_285[i_285][j_285])
                count_285=count_285+1;
        }
    }
    if(count_285==m_285*n_285)
    printf("\nThe matrix is symmetric\n");
    else
    printf("\nThe matrix is not symmetric");
    return 0;
}