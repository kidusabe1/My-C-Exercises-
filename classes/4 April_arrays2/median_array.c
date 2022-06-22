#include <stdio.h>
int main()
{
    int n_285,ar_285[50],i_285,a_285,j_285,median,median1;
    printf("how many numbers do you want to provide?");
    scanf("%d",&n_285);
    printf("Please provide %d positive integers\n",n_285);
    for(i_285=0;i_285<n_285;i_285++)
    {
        scanf("%d",&ar_285[i_285]);
    }
    for(i_285=0;i_285<n_285;i_285++)
    {
        for(j_285=i_285+1;j_285<n_285;++j_285)
        {
            if(ar_285[i_285]>ar_285[j_285])
            {a_285 =  ar_285[i_285];
            ar_285[i_285] = ar_285[j_285];
            ar_285[j_285] = a_285;}
        }
    }
    for(i_285=0;i_285<n_285;i_285++)
    {
        printf("%d ",ar_285[i_285]);
    }
    if(n_285%2!=0)
    {
        median= n_285/2;
        printf("The median is %d", ar_285[median]);
    }
    else if(n_285%2==0)
    {
        median= (ar_285[n_285/2] +ar_285[(n_285/2) -1])/2 ;
        printf("The median is %d", median);
    }
    return 0;
}