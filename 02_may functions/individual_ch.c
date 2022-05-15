#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,len,ch,alph,tabs,newl,word,digit,vowel,cons,space;
    char A[30];
    printf("Please provide a short sentence\n");
    gets(A);
    len=strlen(A);
    for(i=0;i<len;i++)
    {
        if(A[i]=='A' || A[i]=='a' || A[i]=='E' || A[i]=='e' || A[i]=='i' || A[i]=='I' || A[i]=='O' || A[i]=='o' || A[i]=='U' || A[i]=='u')
        {
            vowel++;
        }
    }
    for(i=0;i<len;i++)
    {
        if(A[i]==' ')
        space++;
    }
    cons= (len-1)-vowel;
    alph = vowel + cons;
    ch=vowel+cons+space;
    printf("Total number of space is %d\n",space);
    printf("Total number of vowels is %d\n",vowel);
    printf("Total number of consonants is %d\n",cons);
    printf("Total number of tabs is %d\n",tabs);
    printf("Total number of alphabets is %d\n",alph);
    printf("Total number of character is %d\n",ch);
    return 0;
}