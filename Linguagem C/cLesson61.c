#include <stdio.h>

int main(void){
	
	int x = 1;
	
	printf("%i %i \n", x, &x);
	
	int *p;
	p = &x;
	
	printf("%i %i \n", p, *p);
	
	return 0;
}
