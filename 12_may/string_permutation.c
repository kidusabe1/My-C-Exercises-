#include <stdio.h>
#include <string.h>
int fact(int n)
{
    int f,i,result;
    if(n>1)
    return n*fact(n-1);
    else if (n=1)
    return 1;
}
int main()
{
    int n=5,res;
    res=fact(n);
    printf("%d ",res);
}