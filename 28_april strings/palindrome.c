#include<stdio.h>
#include<string.h>
int main()
{
    int i_285,j_285,length_285,temp_285,count_285,huh;
    char A_285[30],P_285[30];
    printf("Give a sentence\n");
    gets(A_285);
    length_285=strlen(A_285);
    temp_285 = 0;
    for(i_285=length_285-1;i_285>=0;i_285--)
    {
        P_285[temp_285]=A_285[i_285];
        temp_285++;
    }
    
    for(i_285=0;i_285<length_285-1;i_285++)
    {
        if(P_285[i_285]==A_285[i_285])
        {
            count_285++;
        }
        else
            break;
    }
    if(count_285==length_285-1)
        printf("Yes it is palindrome");
    else
        printf("Not a palindrome\n");
    return 0;
}