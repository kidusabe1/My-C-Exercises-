#include <stdio.h>
#include <math.h>
int main()
{
    int i285,sum285,n285,rem285,globe285,j285,dummy285;
    printf("Please provide a number to check if it is armstrong=>");
    scanf("%d",&n285);
    globe285=n285;
    for(i285=1;i285<=n285;n285=n285/10)
    {
        rem285=n285%10;
        sum285= sum285 + pow(rem285,3);
        if(sum285==globe285)
        {   
            dummy285=1;
            printf("yes %d is an armstrong number!\n",globe285);
        }
    }
    if(dummy285!=1)
    {
        printf("%d is not an armstrong number",globe285);
    }
    return 0;
}
