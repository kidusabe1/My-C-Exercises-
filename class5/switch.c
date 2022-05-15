#include <stdio.h>
int main()
{
    int mark285,tm285;
    printf("Provide your mark\n");
    scanf("%d",&mark285);
    tm285 = mark285/10;
    switch(tm285){
        case 9: printf("secured grade is O\n");
        break;
        case 8: printf("secured grade us E\n");
        break;
        case 7: printf("secured grade is A\n");
        break;
        case 6: printf("secured grade is B\n");
        break;
        case 5: printf("secured grade us C\n");
        break;
        case 4: printf("secured grade is D\n");
        break;
        default: printf("FAIL");
        
    }
    return 0;
}