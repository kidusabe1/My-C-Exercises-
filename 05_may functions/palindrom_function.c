#include<stdio.h> 
int checkPalindrome(int number_285)
 {
  int temp_285, remainder_285, rev_285=0; temp_285 = number_285; 
while( number_285!=0 )
   {
remainder_285 = number_285 % 10;
  rev_285 = rev_285*10 + remainder_285; number_285 /= 10;
 }
if ( rev_285 == temp_285 ) 
 return 0; 
 else return 1; 
  }
  int main() 
 { 
  int number_285; 
  printf("Enter the number: "); 
 scanf("%d", &number_285); 
if(checkPalindrome(number_285) == 0) 
  printf("%d is a palindrome number.\n",number_285);
  else printf("%d is not a palindrome number.\n",number_285);
 return 0; 
 }