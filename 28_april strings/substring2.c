#include<stdio.h>
#include<string.h>

void replaceSubstring_285(char [],char[],char[]);

void main()
{
    char string_285[100],sub_285[100],new_str_285[100];
    printf("\nEnter a string: ");
    gets(string_285);
    printf("\nEnter the substring: ");
    gets(sub_285);
    printf("\nEnter the new substring: ");
    gets(new_str_285);
    replaceSubstring_285(string_285,sub_285,new_str_285);
    printf("\nThe string after replacing : %s\n",string_285);
}

void replaceSubstring_285(char string_285[],char sub_285[],char new_str_285[])
{
    int stringLen_285,subLen_285,newLen_285;
    int i=0,j,k;
    int flag_285=0,start_285,end_285;
    stringLen_285=strlen(string_285);
    subLen_285=strlen(sub_285);
    newLen_285=strlen(new_str_285);

    for(i=0;i<stringLen_285;i++)
    {
        flag_285=0;
        start_285=i;
        for(j=0;string_285[i]==sub_285[j];j++,i++)
            if(j==subLen_285-1)
                flag_285=1;
        end_285=i;
        if(flag_285==0)
            i-=j;
        else
        {
            for(j=start_285;j<end_285;j++)
            {
                for(k=start_285;k<stringLen_285;k++)
                string_285[k]=string_285[k+1];
                stringLen_285--;
                i--;
            }

            for(j=start_285;j<start_285+newLen_285;j++)
            {
                for(k=stringLen_285;k>=j;k--)
                string_285[k+1]=string_285[k];
                string_285[j]=new_str_285[j-start_285];
                stringLen_285++;
                i++;
            }
        }
    }
}
