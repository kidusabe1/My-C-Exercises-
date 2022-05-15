#include <stdio.h>
int main()
{
    int n285,a285,b285,i285;
    printf("Provide the number of fibonacci terms you want to see=>");
    a285=0; b285=1;
    int c285=a285+b285;  
    scanf("%d",&n285);  
    printf("%d %d %d ",a285,b285,c285);
    for(i285=3;i285<=n285;i285++)
    {
        a285=b285;
        b285=c285;
        c285=a285+b285;
        printf("%d ",c285);
    }
    return 0;
}