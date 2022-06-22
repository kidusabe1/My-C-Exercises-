#include <stdio.h>
int main()
{
    int count=0,n=1,i,j,k,l;
    char ch;
    ch='A';
    for(i=1;i<=5;i++)
    {
        n=1;
        for(j=i;j<=5;j++)
        {
           printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("%d ",k);
        }
        for(l=1;l>=5;l++)
        {
            printf("%d",l);
            n--;
        }
        printf("\n");
    }
    return 0;
}