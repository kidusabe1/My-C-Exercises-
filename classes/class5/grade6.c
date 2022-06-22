#include <stdio.h>
int main()
{
    printf("Provide your grade:\n");
    int gr285;
    scanf("%d",&gr285);
    if (gr285>=90)
    {
        printf("You have secured an O\n");
    }
    else if(gr285>=80 && gr285<90)
    {
        printf("you have secured an E\n");
    }
    else if(gr285>=70 && gr285<80)
    {
        printf("youb have secured an A\n");
    }
    else if(gr285>=60 && gr285<70)
        printf("you have secured a B\n");
    else{printf("You have failed!!!");}
    return 0;
}