#include<stdio.h>
int main()
{
    int n285,i285,pr285=0;
    printf("Enter the range of number:");
    scanf("%d",&n285);
    for(i285=1;i285<=n285;i285++)
    {
        pr285=(pr285*2)+1;
        printf("%d ",pr285);
    }
}