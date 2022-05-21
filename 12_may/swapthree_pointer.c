#include <stdio.h>
int main()
{
    int a,b,c, *ptra_285,*ptrb_285,*ptrc,temp;
    printf("please provide the value of your 1st,2nd and 3rd integers respectively;\n");
    scanf("%d%d%d",&a,&b,&c);
    ptra_285=&a; ptrb_285=&b; ptrc=&c;
    printf("The value of your 1st integer before swap is=%d\n2nd integer=%d\n3rd integer=%d\n",*ptra_285,*ptrb_285,*ptrc);
    temp= *ptra_285;
    *ptra_285=*ptrb_285;
    *ptrb_285=*ptrc;
    *ptrc=temp;
    printf("The values afer swapping are\n  1st integer=%d\n  2nd integer=%d\n  3rd integer=%d\n",*ptra_285,*ptrb_285,*ptrc);
    return 0;
}