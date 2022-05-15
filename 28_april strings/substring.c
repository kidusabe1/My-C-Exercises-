#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,n,temp;
    char A[5][30], och,nch;
    printf("Please provide a sentence\n");
    for(i=0;i<5;i++)
    {
        scanf("%s",A[i]);
    }
    printf("Which word do you want as ur substring=>\n");
    scanf("%d",&temp);
    printf("give old letter\n");
    scanf(" %c",&och);
    printf("give new letter\n");
    scanf(" %c",&nch);
    i=(temp-1);
        n=strlen(A[i]);
        for(j=0;j<n;j++)
        {
            if(A[i][j]==och)
            {
                A[i][j]=nch;
            }
        }
    printf("Your new sentence is as follows=>\n");
    for(i=0;i<5;i++)
    {
        printf("%s",A[i]);
        printf(" ");
    }
    return 0;
}