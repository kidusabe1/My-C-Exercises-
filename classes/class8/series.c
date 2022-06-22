#include <stdio.h>
#include <math.h>
int main()
{
    int i285,N285;
    float sum285;
    int count285;
    printf("Provide total number of terms=>");
    scanf("%d",&N285);
    sum285=0.0f;
    count285=1;
    for(i285=1;i285<=N285;i285++)
    {
        sum285 = sum285 + ((float)(pow(count285,2))/ (float)(pow(count285,3)));
        count285+=2;
    }
    printf("Sum of the series is: %f\n",sum285);
    return 0;

}