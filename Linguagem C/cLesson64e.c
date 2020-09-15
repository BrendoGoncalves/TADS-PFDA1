#include <stdio.h>

int main(void){
	
	int x = 1, y = 2;
	int  *const px = &x;
	
	x = 3;
	//px = &y; Wrong
	
	printf("%i \n", *px);
	
	*px = 4;
	printf("%i \n", *px);
	
	return 0;
}
