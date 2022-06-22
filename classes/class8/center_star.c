#include <stdio.h>
int main()
{
int n285,i285,j285,k285;
   printf("\nEnter a number to form a pyramid =>"); 
    scanf("%d",&n285); 
    printf("\n");
    for(i285=1;i285<=n285;i285++)
    {
        for(j285=1;j285<=n285-i285;j285++) 
            printf("  "); 
        for(k285=1;k285<=i285;k285++) 
            printf("%d ",k285); 
        for(k285=i285-1;k285>0;k285--)
            printf("%d ",k285);
        printf("\n");
    }
return 0;
}