#include <stdio.h>
int SUM(int count_285, int arr_285[])
{
    int i,total;
    if(count_285<=0)
        return 0;
    total= arr_285[count_285-1]+SUM(count_285-1,arr_285);
    return total;
}
int main()
{
    int num_285,sum,arr_285[20],i,rem_285,count_285;
    printf("Please provide an integer\n");
    scanf("%d",&num_285);
    for(i=0;num_285!=0;)
    {
        rem_285=num_285%10;
        if(rem_285%2==0)
        {
            arr_285[i]=rem_285;
            count_285++;
            i++;
        }
        num_285=num_285/10;
    }
    sum=SUM(count_285,arr_285);
    printf("The sum of the digits in your integer is %d\n",sum);
    return 0;
}