#include <stdio.h>
int power(int x_285, int y_285)
{
    int res_285=x_285,i_285;
    for(i_285=1;i_285<y_285;i_285++)
    {
        res_285=res_285*x_285;
    }
    return res_285;
}
int main()
{
    int x_285,y_285,result_285;
    printf("Please provide the number;\n");
    scanf("%d",&x_285);
    printf("Please provide the exponent\n");
    scanf("%d",&y_285);
    result_285 = power(x_285,y_285);
    printf("The result is %d\n",result_285);
    return 0;
}