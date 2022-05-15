#include <stdio.h>
int main()
{
    int fib_285[100],num_285,i_285,j_285,flag=0;
    printf("Please provide your number\n");
    scanf("%d",&num_285);
    fib_285[0]=0;
    fib_285[1]=1;
    fib_285[2]=fib_285[1]+fib_285[0];
    for(i_285=0;i_285<50;i_285++)
    {
        fib_285[i_285+2]=fib_285[i_285+1]+fib_285[i_285];
    }
    for(i_285=0;i_285<50;i_285++)
    {
        if(num_285==fib_285[i_285])
        {
            printf("Yes, %d is in the fibonacci series located on the %d term\n",num_285,i_285);
            flag++;
            break;
        }
    }
    if(flag==0)
    {
        printf("No, %d is not in the fibonacci series!\n",num_285,i_285);
    }
    return 0;
}