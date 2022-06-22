#include <stdio.h>
int main()
{
    int sum285,i285;
    int arr285[5];
    printf("please give 5 positive integers\n");
    for(i285=0;i285<=4;i285++)
    {
        scanf("%d",&arr285[i285]);
    }

    for(i285=0;i285<=4;i285++)
    {   
        sum285 = sum285 + arr285[i285];
    }
    printf(" The sum of the integers is %d",sum285);
    return 0;
}