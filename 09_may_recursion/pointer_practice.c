#include <stdio.h>
int main()
{
    char a[]="kidus",b[]="Abebe";
    char *p=&a[0];
    //p=&b;
    printf("The address of b is = %p\n",p);
    printf("The value of b is = %c\n",*p);

    return 0;
}