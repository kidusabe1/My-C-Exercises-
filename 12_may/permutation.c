#include <stdio.h>
#include <string.h>
void changePosition(char *ch1, char *ch2)
    {
        char tmp;
        tmp = *ch1;
        *ch1 = *ch2;
        *ch2 = tmp;
    }
void charPerm(char *cht, int startnum_285, int endnum_285)
    {
        int i;
        if (startnum_285 == endnum_285)
            printf("%s  ", cht);
        else
        {
            for (i = startnum_285; i <= endnum_285; i++)
            {
                changePosition((cht+startnum_285), (cht+i));
                charPerm(cht, startnum_285+1, endnum_285);
                changePosition((cht+startnum_285), (cht+i));
            }
        }
    }
int main()
    {
        char str_285[4];
        printf("Input a 4 letter word: ");
        scanf("%s",str_285);
        printf("\n Permutations of given string using pointers:\n");
        int n = strlen(str_285);
        printf(" The permutations of the string are : \n");
        charPerm(str_285, 0, n-1);
        printf("\n\n");
        return 0;
    }