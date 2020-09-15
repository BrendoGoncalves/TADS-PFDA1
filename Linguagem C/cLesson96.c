#include <stdio.h>

int main(void){
	
	struct ocean{
		int fish;
		int shark;
		int whale;
	}blue;
	
	int x;
	double y;
	char w[10];
	int z[3][3];
	int *p;
	
	printf("%i \n", sizeof(x));
	printf("%i \n", sizeof(y));
	printf("%i \n", sizeof(w));
	printf("%i \n", sizeof(z));
	printf("%i \n", sizeof(blue));
	printf("%i \n", sizeof(p));
	printf("%i \n", sizeof(int));
	printf("%i \n", sizeof(char));
	
	return 0;
}
