#include <stdio.h>
int main()
{ 
    int i,n;
    printf("Please give the the size of your array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Please give the elements of your array\n");
    for(i=0;i<n;i++)
    {
        printf("Element %d=",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Extracting every 3rd element of your array starting from the last index\n");
    for(i=n-3;i>=0;i=i-3)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}