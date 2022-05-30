#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int SUM(int *pt,int size)
{
    int i,res;
    if(size==0)
    {
        return *pt;
    }
    else
    {
        res= *pt+SUM(pt+1,size-1);
    }
    return res;
}
int main()
{
    int i,n[10];
    printf("Give your integer elements\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&n[i]);
    }
    printf("The sum of your integers is %d\n",SUM(n,10));
    return 0;
}