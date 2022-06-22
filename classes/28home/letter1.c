#include<stdio.h>
 
void main()
{
    int i285,j285,n285;
    printf("\nEnter the number of lines\n");
    scanf("%d",&n285);
    for(i285=1;i285<=n285;i285++)
    {
        for(j285=i285;j285>=1;j285--)
        {
            printf("%c ",(char)(j285+64));
        }
        printf("\n");
    }
}