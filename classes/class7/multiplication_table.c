#include <stdio.h>
int main()
{
    printf("Provide your positive integer\n");
    int pr,num,i;
    scanf("%d",&num);
    for(i=1; i<=10;i++)
    {
        pr=num*i;
        printf("%d*%d=%d\n",num,i,pr);
    }
    return 0;
}