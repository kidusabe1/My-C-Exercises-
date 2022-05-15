#include <stdio.h>
int main()
{
    int i285,pr285, arr285[15];
    printf("Please provide 15 ositive integers\n");
    for(i285=0;i285<15;i285++)
    {
        scanf("%d",&arr285[i285]);
    }
    printf("Even numbers are:");
    for(i285=0;i285<15;i285++)
    {
        pr285= arr285[i285]%2;
        if(pr285==0)
        {
            printf(" %d ",arr285[i285]);
        }
    }
    printf("\nOdd numbers are: ");
    for(i285=0;i285<15;i285++)
    {
        pr285=arr285[i285]%2;
        if(pr285!=0)
        {
            printf("%d ",arr285[i285]);
        }
    }

    return 0;
}