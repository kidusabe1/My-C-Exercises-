#include <stdio.h>
int main()
{
    printf("Please provide the temperature in celisius\n");
    float cel426;
    float far426;
    scanf("%f",&cel426);
    far426=(1.8*cel426)+32;
    printf("%f degree celisius is %f degree farenheit\n",cel426,far426);
    return 0;
}