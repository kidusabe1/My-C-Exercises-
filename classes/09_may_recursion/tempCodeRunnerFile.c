#include <stdio.h>
int main()
{
    const float pi_285=3.14;
    float *ptr_285;
    int n;
    ptr_285=&pi_285;
    printf("The value of pi is %f\n",*ptr_285);
    printf("But its okay, give your own desired value to pi\n");
    scanf("%f",ptr_285);
    printf("=-=-==-=-=-=-=-=-=-==-=-=-=-=-=-\n");
    printf("The new value you have given is = %f\n",*ptr_285);
    printf("=-=-==-=-=-=-=-=-=-==-=-=-=-=-=-\n");
    n=1%10;
    printf("%d ",n);
    return 0;
}