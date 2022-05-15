#include <stdio.h>
#include <string.h>
int main()
{
    //gets and puts
    char A_285[20];
    printf("Give a sentence with less than 19 characters\n");
    gets(A_285);
    printf("\n");
    puts(A_285);
    printf("\n");

    //scanf and printf

    printf("Give a sentence with less than 19 characters(see change when we use printf)\n");
    // scanf stops at space...
    scanf("%s",A_285);
    printf("\n");
    printf("Your sentence is=>>\n");
    printf("%s",A_285);
    printf("\n");
}