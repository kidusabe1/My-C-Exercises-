#include <stdio.h>
int main()
{
    int i,j;
    for (i = 0; i <10; i++)
    {
        //printf("%d\n",i);
        for (j=i;j>=0;j--)
        {printf("%d ",j);}
        printf("\n");
    }
    return 0;
}