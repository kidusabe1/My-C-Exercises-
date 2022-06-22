#include <stdio.h>
int main()
{
    printf("Provide the numbers you want to compare:\n");
    float a285,b285;
    scanf("%f%f",&a285,&b285);
    if (a285<b285) {
        printf("The larger number is %f",b285);
    }
    else if(a285>b285)
    {
        printf("The larger number is %f",a285);
    }
    else
    {printf("The numbers must be distinct!");}
    return 0;
}
