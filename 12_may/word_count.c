#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,count,n;
    char arr[30][30],sub[30];
    printf("How many words does your sentence have?\n");
    scanf("%d",&n);
    printf("Please provide a sentence\n");
    for(i=0;i<n;i++)
    {
        scanf("%s",arr[i]);
    }
    printf("What is the string you are looking to count?\n");
    scanf("%s",sub);
    for(i=0;i<n;i++)
    {
        if(strcmp(arr[i],sub)==0)
        count++;
    }
    printf("count=%d",count);
    return 0;
}