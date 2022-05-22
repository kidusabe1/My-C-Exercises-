#include<stdio.h>

union tagname_285
{
	unsigned int a;
	unsigned char s[4];
};

union tagname_285 object_285;

int main()
{
	char i; 
	object_285.a=0xAABBCCDD;

	printf("Integer number: %ld, hex: %X\n",object_285.a,object_285.a);

	printf("Indivisual bytes: ");
	for(i=3;i>=0;i--)
		printf("%02X ",object_285.s[i]);

	printf("\n");
	return 0;
}