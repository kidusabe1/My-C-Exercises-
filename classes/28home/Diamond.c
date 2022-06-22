#include<stdio.h>

int main(){
	
	int i285, j285;
	char str285[]="KIDUSABE";
	int pointer285 = 8;
	
	for(i285 = 0 ; i285 < 8 ; i285++ )
	{
		for( j285 =  0 ; j285 < pointer285 - i285 ; j285++)
			printf("%c", str285[j285]);
			
		for(j285 = 0 ; j285 < i285; j285++)
			printf("  ");
			
		for( j285 =  pointer285- (i285+1) ; j285 >= 0 ; j285--)
			printf("%c", str285[j285]);
					
		printf("\n");
	}
	
	for(i285 = pointer285 - 1 ; i285 > 0  ; i285-- )
	{
		for( j285 =  0 ; j285 < (pointer285 - i285 + 1) ; j285++)
			printf("%c", str285[j285]);
			
		for(j285 = 0 ; j285 < i285- 1; j285++)
			printf("  ");
			
		for( j285 =  pointer285- i285 ; j285 >= 0 ; j285--)
			printf("%c", str285[j285]);
					
		printf("\n");
	}
}