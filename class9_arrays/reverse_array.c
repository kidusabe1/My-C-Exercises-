#include <stdio.h>
int main()
{
    int i285,arr285[5];
    printf("Please provide 5 integers\n");
    for(i285=0;i285<5;i285++)
    {
        scanf("%d",&arr285[i285]);
    }
    for(i285=4;i285>=0;i285--)
    {
        printf("Element %d is %d \n",i285,arr285[i285]);
    }
    return 0;
}