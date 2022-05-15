#include <stdio.h>
int main()
{
    printf("Please state your paisa:\n");
    int total426,qou426,rem426;
    scanf("%d",&total426);
    qou426=total426/100;
    rem426= total426%100;
    printf("%d paisa is %d rupees and %d paisa",total426,qou426,rem426);
    return 0;
}