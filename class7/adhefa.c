#include <stdio.h>

int main()
{
  int n058, i058, p058 = 0;
  printf("Enter A Positive Integer : ");
  scanf("%d", &n058);
  if (n058 == 0 || n058 == 1)
    p058 = 1;
  for (i058 = 2; i058 < n058; i058++)
  {
    if (n058 % i058 == 0)
    {
      p058 = 1;
      break;
    }
  }
  if (p058 == 0)
    printf("%d Is A Prime Number.", n058);
  else
    printf("%d Is Not A Prime Number.", n058);
  return 0;
}