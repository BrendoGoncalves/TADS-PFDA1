#include <stdio.h>

int main(void){
	
	int i, j;

	j = rand();
	printf("%i \n", j);
	
	srand(time(NULL));
	
	printf("%i  ", rand() % 100);
	
	return 0;
}
