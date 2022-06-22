#include <stdio.h>
int main()
{
    int i285,a285[5]={1,2,3,4,5},b285[5];
    for(i285=0;i285<5;i285++)
    {
        b285[i285]=a285[i285];
    }
    printf("Elements of array b are=>");
    for(i285=0;i285<5;i285++)
    {
        printf("%d ",b285[i285]);
    }
    return 0;
}