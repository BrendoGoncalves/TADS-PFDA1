#include <stdio.h>

int main(void){
	
	char x[] = {"Dolphin"};
	void function(char *pointer);
	
	function(x);
	
	return 0;
}

void function(char *pointer){
	
	while(*pointer != '\0'){
		printf("%i %c \n", pointer, *pointer);
		++pointer;
	}
}
