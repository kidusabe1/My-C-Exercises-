#include <stdio.h>
#include <string.h>

void replaceSubstring(char [],char[],char[]);

void main()
{
    char string[100],sub[100],newstr[100];
    printf("\nEnter a string: ");
    gets(string);
    printf("\nEnter the substring: ");
    gets(sub);
    printf("\nEnter the new substring: ");
    gets(newstr);
    replaceSubstring(string,sub,newstr);
    printf("\nThe string after replacing : %s\n",string);
}

void replaceSubstring(char string[],char sub[],char newstr[])
{
    int stringlen,sublen,newlen;
    int i=0,j,k;
    int flag=0,start,end;
    stringlen=strlen(string);
    sublen=strlen(sub);
    newlen=strlen(newstr);

    for(i=0;i<stringlen;i++)
    {
        flag=0;
        start=i;
        for(j=0;string[i]==sub[j];j++,i++)
            if(j==sublen-1)
                flag=1;
        end=i;
        if(flag==0)
            i-=j;
        else
        {
            for(j=start;j<end;j++)
            {
                for(k=start;k<stringlen;k++)
                string[k]=string[k+1];
                stringlen--;
                i--;
            }

            for(j=start;j<start+newlen;j++)
            {
                for(k=stringlen;k>=j;k--)
                string[k+1]=string[k];
                string[j]=newstr[j-start];
                stringlen++;
                i++;
            }
        }
    }
}
