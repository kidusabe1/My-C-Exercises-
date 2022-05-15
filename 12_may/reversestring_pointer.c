#include <stdio.h>
#include <string.h>
int main()
{
    char arr[30], *ptr;
    int n,i;
    printf("Provide a short string\n");
    fgets(arr,30,stdin);
    n=strlen(arr);
    ptr=&arr[n];
    for(i=0;i<=n;i++)
    {
        printf("%c ",*ptr);
        ptr--;
    }
    return 0;
}