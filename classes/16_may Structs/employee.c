#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct employee{
    char name[30];
    char gender[6];
    char designation[30];
    char department[30];
    float basicpay;
}employee;

int main()
{
    employee *ptr_285;
    int n,i;
    float HR_285,DA_285,gross_pay;
    printf("Give the number of employees you have\n");
    scanf("%d",&n);
    ptr_285= (employee*) malloc(n*sizeof(employee));
    for(i=0;i<n;i++)
    {
        printf("PLease give the details of employee %d\t\n",i+1);
        printf("==============\t==============\t============\n");
        printf("name=>\n");
        scanf("%s",&(ptr_285+i)->name);
        printf("Gender=>\n");
        scanf("%s",&(ptr_285+i)->gender);
        printf("Designation=>\n");
        scanf("%s",&(ptr_285+i)->designation);
        printf("Department=>\n");
        scanf("%s",&(ptr_285+i)->department);
        printf("basic pay=>\n");
        scanf("%f",&(ptr_285+i)->basicpay);
        printf("==============\t==============\t============\n");
    }
    //assuming the dearness allowance is 20%
    for(i=0;i<n;i++)
    {
        gross_pay= (ptr_285+i)->basicpay + 0.25*(ptr_285+i)->basicpay + 0.2*(ptr_285+i)->basicpay;
        printf("The gross pay of employee %d is=>%f\n",i+1,gross_pay);
    }

    return 0;
}