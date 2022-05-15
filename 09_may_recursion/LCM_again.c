#include <stdio.h>
void LCM(int a_285,int b_285)
{
    int i_285,result_285;
    for(i_285=1;i_285<5000;i_285++)
    {
        if(i_285%a_285==0 && i_285%b_285==0)
        {
            printf("LCM of %d and %d is %d\n",a_285,b_285,i_285);
            break;
        }
    }
}
int main()
{
    int a_285,b_285;
    printf("Please provide the two numbers\n");
    scanf("%d%d",&a_285,&b_285);
    LCM(a_285,b_285);
    return 0;
}