#include <stdio.h>
#include <string.h>
int main()
{
    char arr[20], *ptr;
    int i,n,cCount,vCount;
    printf("Provide your string\n");
    fgets(arr,20,stdin);
    ptr=&arr[0];
    n=strlen(arr);
    while(*ptr!='\0')
    {
        if(*ptr=='U'|| *ptr=='O'|| *ptr=='I'|| *ptr=='E'|| *ptr=='A'|| *ptr=='u'|| *ptr=='o'|| *ptr=='i'|| *ptr=='e'|| *ptr=='a')
            vCount++;
        ptr++;
    }
    cCount=n-vCount-1;
    printf("The total number of vowels is %d\n",vCount);
    printf("The total number of consonants is %d\n",cCount);
    return 0;
}