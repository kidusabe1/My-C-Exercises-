#include <stdio.h>
int main()
{
    int c_285,first_285,last_285, middle_285, n_285, key_285, array_285[100];
    printf("Enter the number of elements\n");
    scanf("%d",&n_285);
    printf("Enter %d integers\n",n_285);
    for(c_285=0;c_285<n_285;c_285++)
    {
        scanf("%d",&array_285[c_285]);
    }
    printf("Enter value to find\n");
    scanf("%d",&key_285);

    first_285=0;
    last_285=n_285-1;
    middle_285=(first_285+last_285)/2;
    while(first_285<=last_285)
    {
        if(array_285[middle_285]<key_285)
            first_285= middle_285 +1;
        else if(array_285[middle_285]==key_285)
        {
            printf("%d is found at location %d.\n",key_285,middle_285+1);
            break;
        }
        else
        last_285= middle_285 -1;

        middle_285 = (first_285+last_285)/2;
    }
    if(first_285>last_285)
    printf("NOT FOUND! %d IS NOT PRESENT IN THE LIST.\n",key_285);
    return 0;
}