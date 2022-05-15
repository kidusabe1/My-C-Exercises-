#include<stdio.h>
int main()
{
    int num1_285, num2_285, sum_285;
    int *ptr1_285, *ptr2_285;
    printf("Enter any two Number: ");
    scanf("%d%d", &num1_285, &num2_285);
    ptr1_285 = &num1_285;
    ptr2_285 = &num2_285;
    sum_285 = *ptr1_285 + *ptr2_285;
    printf("\nSum of %d and %d is %d", *ptr1_285, *ptr2_285, sum_285);
    return 0;
}