#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,count,N,n,word_count=0;
    char sent[30],word[10],arr[10],*ptr;
    printf("Give a short sentence\n");
    gets(sent);
    printf("What is the word you are looking to count\n");
    gets(word);
    N= strlen(sent);
    n= strlen(word);
    ptr=arr;
    for(i=0;i<N;i++)
    {
        if(sent[i]==' ')
        {
            if(sent[i+1]==word[0])
            {
                ptr=&sent[i+1];
                for(j=0;j<n;j++)
                {
                    if(*ptr==word[j])
                    {
                        count++;
                        if(count==n)
                        {
                            word_count++;
                        }
                        if(count>n)
                        {
                            word_count--;
                        }
                        ptr++;
                    }
                }
            }
        }
    }
    printf("Word count is %d",word_count);
    return 0;
}