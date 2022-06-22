#include <stdio.h>
void PRIME(int n)
{
    int i_285,count_285,j_285;
    for(i_285=2;i_285<=n;i_285++)
    {
        count_285=0;
        for(j_285=1;j_285<=i_285;j_285++)
        {
            if(i_285%j_285==0)
            {
                count_285++;
            }
        }
        if(count_285==2)
        {
            printf("%d ",i_285);
        }
    }
}
int main()
{
    int num;
    printf("Please provide the range of prime numbers you want to be printed out\n");
    scanf("%d",&num);
    printf("The prime numbers between 1 and %d are as follows==\n",num);
    PRIME(num);
    return 0;
}