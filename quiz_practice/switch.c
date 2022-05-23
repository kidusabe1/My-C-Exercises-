#include <stdio.h>
int main()
{
    int i,j,n,k;
    int a[3][3];
    printf("please give the elements of your first 3*3 matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("The transpose of your matrix will be=>\n");
    for(j=0;j<2;j++)
    {
        for(i=0;i<3;i++)
        {
            printf("%d ",a[i][j]);
            if(j==1)
            {
                printf("\n");
            }
        }
    }
    return 0;
}