#include <stdio.h>
int SUM(int A_285[],int n_285)
{
    int sum_285,b;
    if(n_285==0)
    {
        return A_285[0];
    }
    else
    {
        sum_285=A_285[n_285]+SUM(A_285,n_285-1);
    }
    return sum_285;
}
int main()
{
    int i,A_285[30],num_285,sum_285;
    printf("Please provide the number of your elements_285");
    scanf("%d",&num_285);
    printf("Please provide the elements of your list_285");
    for(i=0;i<num_285;i++)
    {
        scanf("%d",&A_285[i]);
    }
    sum_285=SUM(A_285,num_285-1);
    printf("The sum of your elements is %d\n_285",sum_285);
}