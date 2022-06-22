#include <stdio.h>
#include <string.h>
int main()
{
    char arr_285[20], *ptr_285;
    int i,n,cCount_285,vCount_285;
    printf("Provide your string\n");
    fgets(arr_285,20,stdin);
    ptr_285=&arr_285[0];
    n=strlen(arr_285);
    while(*ptr_285!='\0')
    {
        if(*ptr_285=='U'|| *ptr_285=='O'|| *ptr_285=='I'|| *ptr_285=='E'|| *ptr_285=='A'|| *ptr_285=='u'|| *ptr_285=='o'|| *ptr_285=='i'|| *ptr_285=='e'|| *ptr_285=='a')
            vCount_285++;
        ptr_285++;
    }
    cCount_285=n-vCount_285-1;
    printf("The total number of vowels is %d\n",vCount_285);
    printf("The total number of consonants is %d\n",cCount_285);
    return 0;
}