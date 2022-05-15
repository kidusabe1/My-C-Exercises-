#include <stdio.h>
int main()
{
    int num,arr[30],*ptr,n,i,j;
    printf("Please provide your integer\n");
    scanf("%d",&num);
    while(num!=0)
    {
        arr[i]=num%10;
        num=num/10;
        i++;
    }
    ptr=arr;
    for(j=i;j>0;j--)
    {
        printf("%d ",*ptr);
        *ptr++;
    }
    return 0;
}