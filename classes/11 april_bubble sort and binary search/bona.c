#include <stdio.h>
int main()
{
    int i,initial,last,arr[50],middle,n,key;
    printf("How many numbers do you want?\n");
    scanf("%d",&n);
    printf("Provide %d integers\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    initial=0;
    last=n-1;
    middle=(initial+last)/2;
    printf("Provide the number you want to search\n");
    scanf("%d",&key);
    i=0;
    while(i<n)
    {
        if(key>arr[middle])
            {
                initial= middle+1;
                middle=(initial+last)/2;
            }
        else if(key<arr[middle])
            {
                last= middle-1;
                middle=(initial+last)/2;
            }
        else if(key==arr[middle])
            {
                printf("%d is found at element %d\n",key,middle);
                break;
            }
        else
            {
                printf("NO where to be founf!");
            }
        i++;
    }
    return 0;
}