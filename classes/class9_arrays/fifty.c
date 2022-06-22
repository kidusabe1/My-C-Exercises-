#include <stdio.h>
int main()
{
    int a_285[50],i_285,n_285;
    printf("\nEnter the range:");
    scanf("%d",&n_285);

    printf("\nEnter values for the array: ");
    for(i_285=0; i_285<n_285; i_285++) 
    scanf("%d",&a_285[i_285]);

    printf("\nThe elements are:");
    for(i_285=0; i_285<n_285; i_285++) 
    printf("%d \t",a_285[i_285]);
    return 0;
 }