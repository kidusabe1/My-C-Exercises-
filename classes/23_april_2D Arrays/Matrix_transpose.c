#include <stdio.h>
int main()
{
    int i_285,j_285,m_285,n_285;
    int A_285[10][10];
    printf("State the order of your matrix\n");
    scanf("%d%d",&m_285,&n_285);
    printf("Please provide the elements of your matrix correspondingly\n");
    for(i_285=0;i_285<m_285;i_285++)
    {
        for(j_285=0;j_285<n_285;j_285++)
        {   
            printf("A[%d][%d]=",i_285+1,j_285+1);
            scanf("%d",&A_285[i_285][j_285]);
        }
    }
    printf("The matrix is as follows\n");
    for(i_285=0;i_285<m_285;i_285++)
    {
        for(j_285=0;j_285<n_285;j_285++)
        {
            printf("%d\t",A_285[i_285][j_285]);
            if(j_285==n_285-1)
            printf("\n");
        }
    }
    printf("The transpose of the matrix is\n");
    for(j_285=0;j_285<n_285;j_285++) // This is to change the order of the matrix, since the first loop is for the rows and the second is for columns
    {
        for(i_285=0;i_285<m_285;i_285++)// This is to change the order of the matrix, since the first loop is for the rows and the second is for columns
        {
            printf("%d\t",A_285[i_285][j_285]); // I normally expected the I and J to be exchanged but they are not because the number of column has to come first(i)
            if(i_285==(m_285-1))
            printf("\n");
        }
    }    
    return 0;
} 