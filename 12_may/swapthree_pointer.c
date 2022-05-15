#include <stdio.h>
int main()
{
    int a,b,c, *ptra,*ptrb,*ptrc,temp;
    printf("please provide the value of your 1st,2nd and 3rd integers respectively;\n");
    scanf("%d%d%d",&a,&b,&c);
    ptra=&a; ptrb=&b; ptrc=&c;
    printf("The value of your 1st integer before swap is=%d\n2nd integer=%d\n3rd integer=%d\n",*ptra,*ptrb,*ptrc);
    temp= *ptra;
    *ptra=*ptrb;
    *ptrb=*ptrc;
    *ptrc=temp;
    printf("The values afer swapping are\n  1st integer=%d\n  2nd integer=%d\n  3rd integer=%d\n",*ptra,*ptrb,*ptrc);
    return 0;
}