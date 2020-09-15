#include <stdio.h>

int main(void){
	
	short int vector1[5] = {0, 1, 2, 3, 4};
	long int vector2[5] = {5, 6, 7, 8, 9};
	
	int i = 0;
	do{
		vector2[vector1[i]];
		printf("%i", vector2[vector1[i]]);
		++i;
	}while(i < 5);
	
	return 0;
}
