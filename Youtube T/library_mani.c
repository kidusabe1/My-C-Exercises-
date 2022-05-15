#include <stdio.h>
#include "library.h"
int main()
{
    int x=0;
    printf("%f\n",reciprocal(2));
    printf("%d\n",power(5,5));
    int age[]= {872,13,35,35,634};
    int size= 5;
    printf("%d",oldest(age,size));
}