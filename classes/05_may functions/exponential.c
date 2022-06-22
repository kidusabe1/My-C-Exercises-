#include <stdio.h>
#include <math.h>
float fact(float f_285)
{
    float i_285,n_285;
    n_285=f_285;
    for(i_285=1;i_285<f_285;i_285++)
    {
        n_285=n_285*(f_285-i_285);
    }
    return n_285;
}
int main()
{
    float terms_285,x_285,i_285,qoutient_285,sum_285=0;
    printf("How many terms do you want to be added\n");
    scanf("%f",&terms_285);
    printf("What is our 'x'?\n");
    scanf("%f",&x_285);
    for(i_285=1;i_285<=terms_285;i_285++)
    {
        qoutient_285= pow(x_285,i_285)/fact(i_285);
        sum_285=sum_285+qoutient_285;
    }
    printf("%f is the value of e^%f\n",sum_285+1,x_285);
    return 0;
}