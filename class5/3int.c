#include <stdio.h>
int main()
{
    printf("please provide any 3 distinct numbers\n");
    int a285,b285,c285;
    scanf("%d %d %d", &a285, &b285, &c285);
    if (a285!=b285 && b285!=c285 && a285!=c285)
    {
        if(a285>b285 && a285>c285)
            {
                printf("%d is the greatest number\n",a285);
            }
        else if (b285>a285 && b285>c285)
        {
            printf("%d is the greatest number\n",b285);
        }
        else if (c285>a285 && c285>b285)
        {
            printf("%d is the greatest numebr\n",c285);
        }
        
        else{
            printf("wow\n");
        }
    }  
    else
    {
        printf("Your numbers must be distinct!\n");
    }
    return 0;
}