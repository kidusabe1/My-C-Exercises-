#include <stdio.h>
int main()
{
    int i285,rem285,n285,div285;
    printf("Please provide the number you want to be reversed=>");
    scanf("%d",&n285);
    for(i285=1;i285<=n285;n285=n285/10)
    {
        rem285=n285%10;
        printf("%d",rem285);
    }
    return 0;
}