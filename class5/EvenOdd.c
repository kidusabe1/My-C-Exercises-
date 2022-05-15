#include <stdio.h>
int main()
{
    printf("Provide the integer:\n");
    int a285;
    scanf("%d",&a285);
    if((a285%2==0) && (a285!=0))
    {
        printf("%d is Even\n", a285);
    }
    else if((a285%2!=0) && (a285!=0))
    {printf("%d is odd",a285);}
    else{
        printf("0 is niether odd nor even!!!");
    }
    return 0;
}