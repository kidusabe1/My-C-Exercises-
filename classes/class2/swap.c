#include <stdio.h>
int main()
{
    printf("provide the numbers you want to swap respectively\n");
    int a426,b426,c426;
    scanf("%d%d",&a426,&b426);
    printf("The numbers before swapping are %d and %d\n",a426,b426);
    c426=a426;
    a426=b426;
    b426=c426;
    printf("after swap, the numbers are %d and %d\n",a426,b426);
    return 0;
}