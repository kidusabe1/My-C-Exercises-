#include <stdio.h>
int main()
{
    int i,a[50],largest,count,large2,n;
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
        if(a[i]>largest)
        largest=a[i];
        count=i;
    }
    large2=count-1;
    printf("The second largest number in your list is %d",a[large2]);
    return 0;
}