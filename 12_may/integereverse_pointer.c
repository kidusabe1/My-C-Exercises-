#include <stdio.h>
int main()
{
    int num_285,arr[30],*ptr_285,n,i,j;
    printf("Please provide your integer\n");
    scanf("%d",&num_285);
    while(num_285!=0)
    {
        arr[i]=num_285%10;
        num_285=num_285/10;
        i++;
    }
    ptr_285=arr;
    for(j=i;j>0;j--)
    {
        printf("%d ",*ptr_285);
        *ptr_285++;
    }
    return 0;
}