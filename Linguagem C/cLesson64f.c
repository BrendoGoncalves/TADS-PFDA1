#include <stdio.h>

int main(void){
	
	const int x = 1, y = 2;
	const int *px = &x;
	
	//x = 3; Wrong
	px = &y; 
	
	printf("%i", *px);
	
	return 0;
}
