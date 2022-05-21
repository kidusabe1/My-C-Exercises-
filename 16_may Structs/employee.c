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
    employee *ptr;
    int n,i;
    float HR,DA,gross_pay;
    printf("Give the number of employees you have\n");
    scanf("%d",&n);
    ptr= (employee*) malloc(n*sizeof(employee));
    for(i=0;i<n;i++)
    {
        printf("PLease give the details of employee %d\t",i+1);
        printf("==============\t==============\t============\n");
        printf("name=>\n");
        scanf("%s",&(ptr+i)->name);
        printf("Gender=>\n");
        scanf("%s",&(ptr+i)->gender);
        printf("Designation=>\n");
        scanf("%s",&(ptr+i)->designation);
        printf("Department=>\n");
        scanf("%s",&(ptr+i)->department);
        printf("basic pay=>\n");
        scanf("%f",&(ptr+i)->basicpay);
        printf("==============\t==============\t============\n");
    }
    //assuming the dearness allowance is 20%
    for(i=0;i<n;i++)
    {
        gross_pay= (ptr+i)->basicpay + 0.25*(ptr+i)->basicpay + 0.2*(ptr+i)->basicpay;
        printf("The gross pay of employee %d is=>%f\n",i+1,gross_pay);
    }

    return 0;
}