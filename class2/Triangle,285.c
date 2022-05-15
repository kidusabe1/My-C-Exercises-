#include <stdio.h>
/*I am using float data type because when I calculate the area the result might come in 
    non integer number and that might give inaccurate result.
    DISCLAIMER: In visual code, we use ./a.exe instead of ./a.out
              : In Visual code, the gedit function is obsolete, we do it manuall/////////////////*/
int main()
{
    printf("please enter integer value of your base and height respectively:\n");
    int base285,height285;
    float area285;
    scanf("%d%d",&base285,&height285);
    area285=0.5*base285*height285;
    printf("Result:%f\n",area285);
    return 0;
}