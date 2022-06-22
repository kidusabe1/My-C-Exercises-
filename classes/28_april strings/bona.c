#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,flag,temp,count,a,b,c,index[10],index_last[10];
    char str[30], substr[10], replace[10];
    printf("Please provide a short sentence\n");
    gets(str); 
    printf("Please provide your substring\n");
    gets(substr);
    printf("Please provide your replacing string\n");
    gets(replace);
    a=strlen(substr);
    b=strlen(replace);
    // this for loop is to store the first index values of our substring and string
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==substr[0])
        {
            index[count]=i;
            count++;
        }
    }
    // this for loop is to store the last index values of our substring and string
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==substr[a-1])
        {
            index_last[temp]=i;
            temp++;
        }
    }
    
    printf(" first Index values===\n");
    for(i=0;i<count;i++)
    {
        printf("%d ",index[i]);
        printf("\n");
    }

    printf(" last Index values===\n");
    for(i=0;i<temp;i++)
    {
        printf("%d ",index_last[i]);
        printf("\n");
    }
    for(i=index[0];i<index[0]+a;i++)
    {
        if(str[i]==substr[j])
        {
            flag++;
        }
        if(flag==a)
        {

        }
    }
    printf("%c ",str[index[0]]);
    return 0;
}