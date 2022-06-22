#include <stdio.h>
typedef struct students{
    char name[50];
    int rollno;
    char gender[6];
    float english;
    float maths;
    float chemistry;
    float physics;
    float programming;
}students;
int main()
{
    int n,i,j;
    printf("Provide the number of students\n");
    scanf("%d",&n);
    int sum[n];
    students S[n];
    for(i=0;i<n;i++)
    {
        printf("Give the name of student %d\n",i+1);
        scanf("%s",S[i].name);
        printf("Give the roll number\n");
        scanf("%d",&S[i].rollno);
        printf("Give the gender\n");
        scanf("%s",S[i].gender);
        printf("English marks\n");
        scanf("%f",&S[i].english);
        
        
        printf("math marks\n");
        scanf("%f",&S[i].maths);
        printf("Chemistry marks\n");
        scanf("%f",&S[i].chemistry);
        printf("physics marks\n");
        scanf("%f",&S[i].physics);
        printf("programming marks\n");
        scanf("%f",&S[i].programming);
    }
    for(i=0;i<n;i++)
    {
        
        sum[i]=S[i].physics+S[i].chemistry+S[i].maths+S[i].english+S[i].programming;
    }
    for(i=0;i<n;i++)
    {
        printf("Student name= %s\n", S[i].name);
        printf("\n");
        printf("Student roll number= %d\n",S[i].rollno);
        printf("\n");
        printf("Student Gender= %s\n",S[i].gender);
        printf("\n");
        printf("English Result= %2.2f\n",S[i].english);
        printf("\n");
        printf("Chemistry result= %2.2f\n",S[i].chemistry);
        printf("\n");
        printf("Physics Result= %2.2f\n",S[i].physics);
        printf("\n");
        printf("maths result=%2.2f\n",S[i].maths);
        printf("\n");
        printf("programming result= %2.2f\n",S[i].programming);
        printf("\n");
        printf("Total marks is= %2.2f \n",sum);
        printf("\n");
        printf("%s has failed in the following subjects\n",S[i].name);
        if(S[i].chemistry<=40)
        {
            printf("chemistry\n");
        }
        if(S[i].physics<=40)
        {
            printf("Physics\n");
        }
        if(S[i].english<=40)
        {
            printf("English\n");
        }
        if(S[i].maths<=40)
        {
            printf("maths\n");
        }
        if(S[i].programming<=40)
        {
            printf("programming\n");
        }
        printf("=======================================================================================================\n");
        printf("=======================================================================================================\n");
        printf("=======================================================================================================\n");
    }
    return 0;
}