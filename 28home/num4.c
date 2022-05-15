#include <stdio.h>
int main() 
{
int rows285, coef285 = 1, space285, i285, j285;
printf("\nEnter the number of rows: ");
scanf("%d", &rows285);
for (i285 = 0; i285 < rows285 +1; i285++) 
{
    for (space285 = 1; space285 <= rows285 - i285; space285++)
        printf("  ");
    for (j285 = 0; j285 <= i285; j285++) 
    {
        if (j285 == 0 || i285 == 0)
        coef285 = 1;
        else
        coef285 = coef285 * (i285 - j285 + 1) / j285;
        printf("%4d", coef285);
    }
    printf("\n");
}
return 0;
}