#include <stdio.h>
int main()
{
    int i,j,n,A[5],largest,temp;
    printf("please give 5 numbers\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&A[i]);
    }

    for(i=0;i<4;i++)
    {   
        for(j=(i+1);j<5;j++)
        {
            if(A[i]<A[j])
            {
                temp= A[j];
                A[j]=A[i];
                A[i]=temp;
            }
        }
    }
    for(i=0;i<5;i++)
    {
        printf("%d ",A[i]);
    }
printf("\n");
return 0;
}