#include <stdio.h>
void swap(int x_285, int y_285)
{
    int temp_285;
    temp_285=x_285;
    x_285=y_285;
    y_285=temp_285;
    printf("The values after swapping are a='%d' and b='%d'\n",x_285,y_285);
}
int main()
{
    int a_285,b_285;
    printf("Please give the value of your first number\n");
    scanf("%d",&a_285);
    printf("please provide the value of your second numebr\n");
    scanf("%d",&b_285);
    printf("===================\n");
    printf("The numbers before swapping are a='%d' and b='%d'\n",a_285,b_285);
    swap(a_285,b_285);
    return 0;
}