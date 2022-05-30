#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int m,n,M,N,i,j,k;
    printf("Order of first matrix\n");
    scanf("%d%d",&m,&n);
    printf("Order of second matrix\n");
    scanf("%d%d",&M,&N);
    int A[m][n],B[M][N];
    printf("Give elements of A\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    /*printf("Give elements of B\n");
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }*/
    printf("The transpose of your matrix is as follows\n");
    for(j=0;j<n;j++)
    {
        for(i=0;i<m;i++)
        {
            B[i][j]=A[j][i];
            if(i==(m-1))
            printf("\n");
        }
    }


    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",B[i][j]);
            if(j==(n-1))
            printf("\n");
        }
    }
    return 0;
}