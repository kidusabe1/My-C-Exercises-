#include <stdio.h>
int main()
{
    int a285,j,i,b,count;
    printf("Provide your positive integer\n");
    scanf("%d",&a285);
    count = 0;
    if(a285==0 || a285==1)
        count=1;
    for(i=2;i<a285;i++)
    {
    if (a285%i==0)
    count++;
    }
    if(count==0)
    {
        printf("yes,%d is prime.",a285);
    }
    else
        printf("no, %d is not a prime number.", a285);
    return 0;
}