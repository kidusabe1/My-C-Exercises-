#include <stdio.h>
#include <math.h>
int main()
{
    printf("provide the value=>");
    int n;
    scanf("%d",&n);
    float i,sum,total;
    total = 1;
    for(i=1;i<=n;i++)
    {
        sum = sum+(total);
        total=total+sum;
    }
    printf("%f\n",sum);
    return 0;
}