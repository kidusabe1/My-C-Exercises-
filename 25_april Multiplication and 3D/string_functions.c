#include <stdio.h>
#include <string.h>
void main()
{
    char A_285[20],B_285[20];
    printf("Provide a short sentence\n");
    gets(A_285);
    printf("Provide another short sentence\n");
    gets(B_285);
    printf("Adding both of your sentences would give us===\n");
    strcat(A_285,B_285);
    puts(A_285);
    printf("Over wrting your first sentence with the second would give us===\n");
    strcpy(A_285,B_285);
    puts(A_285);
}