#include <stdio.h>
#include <conio.h>
int main()
{
    int a285,b285,i285,mod285;
    printf("Provide the two positive integers you want to find HCF of:=>");
    scanf("%d%d",&a285,&b285);
    for(i285=1;i285<=a285 && i285<=b285;i285++)
    {
        if(a285%i285==0 && b285%i285==0)
            {
                mod285=i285;
            }
    }
    printf("The HCF of %d and %d is %d!",a285,b285,mod285);
    return 0;
}