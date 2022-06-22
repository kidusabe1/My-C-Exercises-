#include <stdio.h>
int main()
{
    int i_285,j_285,arr_285[30],n,*ptr,temp_285;
    printf("please provide the size of your list of numbers\n");
    scanf("%d",&n);
    printf("Provide the elements of your list\n");
    for(i_285=0;i_285<n;i_285++)
    {
        scanf("%d",&arr_285[i_285]);
    }
    ptr=&arr_285[0];
    for(i_285=0;i_285<n-1;i_285++)
    {
        for(j_285=i_285+1;j_285<n;j_285++)
        {
            if(*(ptr+i_285)< *(ptr+j_285))
            {
                temp_285= *(ptr+i_285);
                *(ptr+i_285)= *(ptr+j_285);
                *(ptr+j_285)=temp_285;
            }
        }
    }
    printf("\nThe elements in the array after sorting : \n\n");
    i_285=0;
    while(i_285<n)
    {
        printf("%d ",*(ptr+i_285));
        i_285++;
    }
    return 0;
}