#include <stdio.h>
#include <math.h>

long long convert(int);

int main() {
  int n285, bin285;
  printf("Enter a decimal number: ");
  scanf("%d", &n285);
  bin285 = convert(n285);
  printf("%d in decimal =  %lld in binary", n285, bin285);
  return 0;
}

long long convert(int n285) {
  long long bin285 = 0;
  int rem285, i285 = 1;

  while (n285!=0) {
    rem285 = n285 % 2;
    n285 /= 2;
    bin285 += rem285 * i285;
    i285 *= 10;
  }

  return bin285;
}