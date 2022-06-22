#include <stdio.h>
int main()
{
    int a_285[10][10][10];
    int i_285,j_285,k_285,q_285,p_285,r_285;
    printf("Please provide the order of your 3D matrix\n");
    scanf("%d%d%d",&p_285,&q_285,&r_285);
    printf("Please provide the elements of your 3D matrix respectively\n");
    for(i_285=0;i_285<p_285;i_285++)
    {
        for(j_285=0;j_285<q_285;j_285++)
        {
            for(k_285=0;k_285<r_285;k_285++)
            {
                printf("a[%d][%d][%d]=",i_285,j_285,k_285);
                scanf("%d",&a_285[i_285][j_285][k_285]);
            }
        }
    }
    printf("The matrix is as follows=>\n");
    for(i_285=0;i_285<p_285;i_285++)
    {
        for(j_285=0;j_285<q_285;j_285++)
        {
            for(k_285=0;k_285<r_285;k_285++)
            {
                printf("Element[%d][%d][%d]=> %d\n",i_285,j_285,k_285,a_285[i_285][j_285][k_285]);
            }
        }
    }
    return 0;
}