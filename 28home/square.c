#include <stdio.h>
int main()
{
int count285, n285;
float x285,y285;
printf("Input the values of x and n:\n");
scanf("%f%d", &x285,&n285);
y285=1.0;
count285=1;
while(count285<=n285)
{
y285=y285*x285;
count285++;
}
printf("x=%f; n=%d; \nx to power n=%f", x285, n285,y285);
return 0;
}