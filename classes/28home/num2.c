#include <stdio.h>
int main()
{
int i285,j285,rows285,space285=0;
printf("\nEnter the number of rows:");
scanf("%d",&rows285);
for(i285=rows285; i285>=1; i285--)
{  
    for(j285=1; j285<=space285; j285++)
        printf("   ");
    for(j285=1; j285<=i285; j285++)
        printf(" %d ",j285);
    for(j285=i285-1; j285>=1; j285--)
        printf(" %d ",j285);
    printf("\n");
    space285++;
}
return 0;
}