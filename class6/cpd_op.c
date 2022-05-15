#include <stdio.h>
int main()
{
int a285=21;
int c285;
c285=a285; printf("Line 1- = Operator example, value of c=%d\n",c285);
c285+=a285; printf("Line 2- += operator example, value of c=%d\n",c285);
c285-= a285; printf("Line 3- -= operator example, value of c=%d\n",c285);
c285*=a285; printf("Line 4- *= operator example, value of c=%d\n",c285);
c285/=a285; printf("Line 5- /= operator example, Value of c=%d\n",c285);
c285=200;
c285%=a285; printf("Line 6- %= operator example, value of C=%d\n",c285);
return 0;
}