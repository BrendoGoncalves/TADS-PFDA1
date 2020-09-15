#include <stdio.h>

int main(void){
	
	char letter;
	
	while( (letter = getchar()) != '\n'){
		switch(letter){
			case 'a':
			case 'A':
				printf("Letter A \n");
				break;
			case 'b':
			case 'B':
				printf("Letter B \n");
				break;
			default:
				printf("No Letter A or B \n");
		}
	}
	return 0;
}
