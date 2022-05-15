#include <stdio.h>
int main()
{
int i285,j285,rows285;
int num285=1;
printf("\nEnter the number of rows: ");
scanf("%d",&rows285 );
for(i285=1; i285<=rows285; i285++)
{
    for(j285=1; j285<=i285; j285++)
    {
        printf(" %d ",num285);
        num285=!num285;
    }
    num285=i285%2;
    printf("\n");
}
    return 0;
}