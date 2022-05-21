#include <stdio.h>
#include <string.h>
int main()
{
    char arr_285[30], *ptr_285;
    int n,i;
    printf("Provide a short string\n");
    fgets(arr_285,30,stdin);
    n=strlen(arr_285);
    ptr_285=&arr_285[n];
    for(i=0;i<=n;i++)
    {
        printf("%c ",*ptr_285);
        ptr_285--;
    }
    return 0;
}