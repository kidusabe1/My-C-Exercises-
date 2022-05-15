#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,n,counta_285=0,counte_285=0,counti_285=0,counto_285=0,countu_285=0,space_285,sum_285,temp_285;
    char A_285[100];
    printf("Please provide a short sentence\n");
    gets(A_285);
    n=strlen(A_285);
    for(i=0;i<n;i++)
    {
        if(A_285[i]=='A' || A_285[i]=='a')
        {
            counta_285++;
        }
        else if(A_285[i]=='E' || A_285[i]=='e')
        {
            counte_285++;
        }
        else if(A_285[i]=='i' || A_285[i]=='I')
        {
            counti_285++;
        }
        else if(A_285[i]=='O' || A_285[i]=='o')
        {
            counto_285++;
        }
        else if(A_285[i]=='U' || A_285[i]=='u')
        {
            countu_285++;
        }
        else if(A_285[i]==' ')
        {
            space_285++;
        }
    }
    printf("frequency of 'A' or 'a' is %d\n",counta_285);
    printf("frequency of 'E' or 'e' is %d\n",counte_285);
    printf("frequency of 'I' or 'i' is %d\n",counti_285);
    printf("frequency of 'O' or 'o' is %d\n",counto_285);
    printf("frequency of 'U' or 'u' is %d\n",countu_285);
    sum_285= counta_285+counte_285+counti_285+counto_285+countu_285+space_285;
    temp_285=n-sum_285;
    printf("The number of the consonants in your sentence is %d ",temp_285);
    return 0;
}