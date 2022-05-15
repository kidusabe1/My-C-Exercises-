#include <stdio.h>
#include <stdlib.h>
int main()
{
 int a_285[30],n_285,i_285,j_285,temp_285,sorted_285;
 printf("how many numbers do you want?=>");   
 scanf("%d",&n_285);
 if(n_285>30)
 {
     printf("Too many numbers!");
     exit(0);
 }
 printf("Please provide the array elements=>");
 for(i_285=0;i_285<n_285;i_285++)
 {
     scanf("%d",&a_285[i_285]);
 }
 for(i_285=0; i_285<n_285-1 && sorted_285==0; i_285++)
 {
     sorted_285=1;
     for(j_285=0; j_285<(n_285-i_285)-1;j_285++)
     if(a_285[j_285]>a_285[j_285+1])
     {
         temp_285 = a_285[j_285];
         a_285[j_285]=a_285[j_285+1];
         a_285[j_285+1]=temp_285;
         sorted_285=0;
     }
 }
 printf("The numbers in a sorted form are>>\n");
 for(i_285=0;i_285<n_285;i_285++)
 {
    printf("\n %d",a_285[i_285]);
 }
 return 0;
}