#include <stdio.h>
int main()
{
    int i_285,n_285, *p,sum;
    int arr[20];
    printf("Provide the size of your array\n");
    scanf("%d",&n_285);
    printf("Give the value of your array\n");
    for(i_285=0;i_285<n_285;i_285++)
    {
        scanf("%d",&arr[i_285]);
    }
    p=arr;
    for(i_285=0;i_285<n_285;i_285++)
    {
        sum=sum+*p;
        *p++;
    }
    printf("The sum of your integers in the array is %d\n",sum);
    return 0;
}