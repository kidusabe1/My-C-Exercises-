#include <stdio.h>
void fib(int n)
{
    int term1_285,term2_285,term3_285,i,fibn[100];
    term1_285=0;
    fibn[0]=term1_285;
    term2_285=1;
    fibn[1]=term2_285;
    term3_285=term1_285+term2_285;
    for(i=2;i<n;i++)
    {
        fibn[i]=fibn[i-1]+fibn[i-2];
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",fibn[i]);
    }
}
int main()
{
    int n;
    printf("Provide the number of fibonacci terms u want=\n");
    scanf("%d",&n);
    fib(n);
    return 0;
}
