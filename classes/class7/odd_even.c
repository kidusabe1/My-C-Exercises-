#include <stdio.h>
int main()
{
    int n285,count2285,count285,j285;
    printf("Provide the number of terms you want=>");
    scanf("%d",&n285);
    printf("\nOur odd numbers are=>");
    for(j285=1;j285<=n285;j285++)
    {    
        count285=2*j285+1;
        if(count285<=n285)
        {
            printf("%d ",count285);
        }
    }
    printf("\nour even numbers are=>");
    for(j285=1;j285<=n285;j285++)
    {
        count2285=j285*2;
        if(count2285<=n285)
        {
            printf("%d ",count2285);
        }
    }
    return 0;
}