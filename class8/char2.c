#include <stdio.h>
int main()
{
int a285,b285,d285;
printf("enter the value:\n");
scanf("%d",&a285);
printf("\n");
for(b285=1;b285<=a285;b285++)
{
    for(d285=1;d285<=b285;d285++)
        printf("%d ",(a285+b285+d285)%2);
        printf("\n");
}
return 0;
}