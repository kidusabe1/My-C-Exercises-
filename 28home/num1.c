#include <stdio.h>
int main()
{
int i285, j285, N285;
printf("\nEnter rows: ");
scanf("%d", &N285);
for(i285=1; i285<=N285; i285++)
{
    if(i285 & 1)
    {
        for(j285=1; j285<=i285; j285++)
        {printf("%d ", j285);}
    }
    else
    {
        for(j285=i285; j285>=1; j285--)
        {printf("%d ", j285);}
    }
printf("\n");
}
return 0;
}