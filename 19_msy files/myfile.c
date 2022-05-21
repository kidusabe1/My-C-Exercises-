#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i,c,n;
    char test[30];
    FILE *fptr;
    fptr= fopen("file1.txt","a");
    if(fptr==NULL)
    {
        printf("ERROR!\n");
        exit(1);
    }
    printf("Give a sentence\n");
    gets(test);
    n=strlen(test);
    for(i=0;i<10;i++)
    {
        for(c=0;c<n;c++)
        {
            fputc(test[c],fptr);
        }
        fputc('\n',fptr);
    }
    fclose(fptr);
    return 0;
}