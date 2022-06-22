#include <stdio.h>
int main()
{
    int n285,count285,i285;
    printf("How many terms do you want to be printed?\n");
    scanf("%d",&n285);
    for(i285=1;i285<=n285;i285++)
    {
        count285=(2*i285)+1;
        printf("%d ",count285);
    }
    return 0;
}