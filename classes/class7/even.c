#include <stdio.h>
int main()
{
    int num285,i285;
    printf("provide your positive integer:\n");
    scanf("%d",&num285);
    for(i285=1;i285<num285;i285++)
    {
        if(i285%2==0)
        {
            printf("%d\n",i285);
        }
    }
    return 0;
}