#include <stdio.h>
int main()
{
	int term1,term2,term3,n,i;
	term1=1;
	term2=1;
	term3= term1+ term2;
	int fib3[50]={term1,term2,term3};
	printf("please provide the fibonacci terms you want to see=>");
	scanf("%d",&n);
	for(i=3;i<n;i++)
	{
		term1= term2;
		term2=term3;
		term3= term1 + term2;
		fib3[i]=term3;
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",fib3[i]);
	}
}