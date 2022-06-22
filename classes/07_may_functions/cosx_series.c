#include <stdio.h>
#include <math.h>
const float PI = 3.142;
float fact(int f)
{
    float i_285,n;
    n=f;
    for(i_285=1;i_285<f;i_285++)
    {
        n=n*(f-i_285);
    }
    return n;
}
float COS(float x, float n)
{
    int i_285,j;
    float sum_285,qoutient_285,a,b,c;
    x = x * (PI / 180.0);
    sum_285=0;
    for(i_285=1;i_285<n;i_285++)
    {
        if((i_285%2)!=0)
        {
            c=i_285*2;
            a=-(pow(x,c));
            b=fact(c);
            qoutient_285=a/b;
        }
        else if((i_285%2)==0)
        {
            c=i_285*2;
            a=pow(x,c);
            b=fact(c);
            qoutient_285=a/b;
        }
        sum_285=sum_285+qoutient_285;
    }
    return sum_285;
}
int main()
{
    float num,n;
    float result;
    printf("Please provide the number of terms u want to add\n");
    scanf("%f",&n);
    printf("cosine of which number do you want to be printed\n");
    scanf("%f",&num);
    result=1+COS(num,n);
    printf("Cosine of %f is %f\n",num,result);
    return 0;
}