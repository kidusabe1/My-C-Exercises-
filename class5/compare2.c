#include <stdio.h>
int main()
{
    printf("Provide the values you want to compare:\n");
    float a426,b426;
    scanf("%f%f",&a426,&b426);
    if (a426<b426){
        printf("The lesser number is %f",a426);
    }
    else{
        printf("the lesser number is %f",b426);
    }
    return 0;
}