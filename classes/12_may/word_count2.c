#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,count_285,n;
    char arr_285[30][30],sub_285[30];
    printf("How many words does your sentence have?\n");
    scanf("%d",&n);
    printf("Please provide a sentence\n");
    for(i=0;i<n;i++)
    {
        scanf("%s",arr_285[i]);
    }
    printf("What is the string you are looking to count?\n");
    scanf("%s",sub_285);
    for(i=0;i<n;i++)
    {
        if(strcmp(arr_285[i],sub_285)==0)
        count_285++;
    }
    printf("count=%d",count_285);
    return 0;
}