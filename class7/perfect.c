#include <stdio.h>
int main()
{
    int a285,i285,count285=0;
    printf("Provide your positive integer=>");
    scanf("%d",&a285);
    count285=0;
    for(i285=1;i285<a285;i285++)
    {
        if((a285%i285)==0)
            {
                count285+=i285;
            }
    }
    if(count285==a285)
    printf("%d is a perfect number.\n",a285);
    else
    printf("%d is not a perfect number.\n",a285);
    return 0;
}  