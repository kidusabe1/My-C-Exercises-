#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    int i,j,index[10],n1,n2,count;
    char str[30], sub[30], rep[30];
    printf("Provide a short sentence\n");
    gets(str);
    printf("Provie a substring\n");
    gets(sub);
    printf("give a new string\n");
    gets(rep);
    n1=strlen(sub);
    n2=strlen(rep);
    //watch out on j
    j=0;
    //this loop is to locate the first index where the first character is located
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==sub[0])
        {
            index[j=j+1]=i;
        }
    }
    j=0;
    //this loop is iterate and check str n1(length of the substring) times after the character with the substring, if they are equal then the count becomes the same as strlen(sub)
    for(i=index[i+1];i<(index[i+1]+n1);i++)
    {
        if(str[i]==sub[j])
        {
            count++;
            j++;
        }
    }
    
    if(count==n1)
    {
        printf("yessssssss found it\n");
    }
    return 0;
}