#include <stdio.h>
int main() {
    FILE *fp_285;
    int c;
    fp_285 = fopen(__FILE__,"r");

    do {
         c = getc(fp_285);  
         putchar(c); 
    }
    while(c != EOF); 
    
    fclose(fp_285);
    return 0;
}