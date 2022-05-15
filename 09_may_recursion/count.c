#include<stdio.h>
int count(int num_285)
{
    int digit_285;
    if(num_285==0)
    {
        return 0;
    }
    else
    {
        digit_285=1+count(num_285/10);
    }
    return digit_285;
}
int main()
{
    int numb_285,n_285;
    printf("Please provide the number\n");
    scanf("%d",&numb_285);
    n_285=count(numb_285);
    printf("The number of digits in %d is==%d\n",numb_285,n_285);
    return 0;
}