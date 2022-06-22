#include<stdio.h>
int main()
{
int a285,b285,d285;
char ch285;
printf("enter the value:\n");
scanf("%d",&a285);
printf("\n");
for(b285=1;b285<=a285;b285++)
{   
    ch285='A';
    for(d285=1;d285<=b285;d285++)
       {printf("%c ",ch285);
        ch285=ch285+1;}
    printf("\n");
}
return 0;
}