#include <stdio.h>
int main()
{
  long given426, hour426, sec426, min426, last426;
  printf("Provide the total seconds\n");
  scanf("%ld",&given426);
  hour426=given426/3600;
  sec426= given426%3600;
  min426= sec426/60;
  last426= sec426%60;
  printf("%ld seconds is %ld hours %ld minutes and %ld seconds",given426,hour426,min426,last426);
  return 0;  
}