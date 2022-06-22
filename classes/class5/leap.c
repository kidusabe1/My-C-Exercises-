#include <stdio.h>
int main()
{
    printf("please provide the year:\n");
    int year285;
    scanf("%d",&year285);
    if ((year285%4==0 && year285%100!=0) || (year285%400==0))
    {
        printf(" %d is a leap year\n",year285);
    }
    else{
        printf("%d is not a leap year\n", year285);
    }
    return 0;
}