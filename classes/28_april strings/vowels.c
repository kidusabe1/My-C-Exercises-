#include <stdio.h>
#include <string.h>
int main()
{
    char A_285[3][10];
    int i,j,count_285;
    printf("Please give 3 words\n");
    for(i=0;i<3;i++)
    {
        gets(A_285[i]);
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<9;j++)
        {
            switch (A_285[i][j])
            {
                case 'a':
                    count_285++;
                    break;
                case 'e':
                    count_285++;
                    break;
                case 'i':
                    count_285++;
                    break;
                case 'o':
                    count_285++;
                    break;
                case 'u':
                    count_285++;
                    break;
                case 'A':
                    count_285++;
                    break;
                case 'E':
                    count_285++;
                    break;
                case 'I':
                    count_285++;
                    break;
                case 'O':
                    count_285++;
                    break;
                case 'U':
                    count_285++;
                    break;
                default:
                    break;
            }
        }
    }
    printf("The total number of your vowels is %d=>",count_285);
}