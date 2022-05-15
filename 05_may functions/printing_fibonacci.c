#include <stdio.h>
int main()
{
    int fib_285[100],num_285,i_285,j_285;
    printf("How many fibonacci terms do you want to be printed out?\n");
    scanf("%d",&num_285);
    fib_285[0]=0;
    fib_285[1]=1;
    fib_285[2]=fib_285[1]+fib_285[0];
    for(i_285=0;i_285<num_285;i_285++)
    {
        fib_285[i_285+2]=fib_285[i_285+1]+fib_285[i_285];
    }
    printf("Your fibonacci series is as follows\n");
    for(i_285=0;i_285<num_285;i_285++)
    {
        printf("%d ",fib_285[i_285]);
    }
    return 0;
}