#include <stdio.h>
int fact(int f_285)
{
    int i_285,n_285;
    n_285=f_285;
    for(i_285=1;i_285<f_285;i_285++)
    {
        n_285=n_285*(f_285-i_285);
    }
    return n_285;
}
int main()
{
    int n_285,r_285,sub_285,a_285,b_285,c_285,ncr_285;
    printf("Please provide your n=\n");
    scanf("%d",&n_285);
    printf("provide your r=\n");
    scanf("%d",&r_285);
    sub_285= n_285-r_285;
    a_285=fact(n_285);
    b_285=fact(r_285);
    c_285=fact(sub_285);
    ncr_285=a_285/(c_285*b_285);
    printf("The computation of %d and %d is %d\n",n_285,r_285,ncr_285);
    return 0;
}