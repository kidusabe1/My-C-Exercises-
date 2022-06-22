#include <stdio.h>
int main()
{
    printf("which operation do you want to perform:\n");
    int a285,c285;
    printf("1 for addition\n");
    printf("2 for subtraction\n");
    printf("3 for division\n");
    printf("4 for multiplication\n");
    printf("5 for modulus calc\n");
    scanf("%d", &a285);
    int one285,two285;
    printf("please provide the numbers you want to operate with;\n");
    scanf("%d%d",&one285,&two285);
    switch(a285)
    {
        case 5: c285=one285%two285;
        printf("%d", c285);
        break;
        case 4: c285=one285*two285;
        printf("%d",c285);
        break;
        case 3: c285= one285/ two285;
        printf("%f",c285);
        break;
        case 2: c285=one285-two285;
        printf("%d",c285);
        break;
        case 1: c285= one285+two285;
        printf("%d",c285);
        break;
        default: printf("NA");

    }
    return 0;
}