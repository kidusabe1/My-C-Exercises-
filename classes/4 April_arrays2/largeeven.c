#include <stdio.h>
int main()
{
    int i,a[50],largest,n;
    printf("How many numbers do you want?\n");
    scanf("%d",&n);
    printf("please provide the integers=>\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    largest=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>largest && a[i]%2==0)
        largest=a[i];
    }
    printf("The largest number in your list is %d",largest);
    return 0;
}