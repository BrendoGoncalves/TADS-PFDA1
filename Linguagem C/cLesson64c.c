#include <stdio.h>

int main(void){
	
	char x[5] = {"Whale"};
	void function(const char *pointer);
	
	function(x);
	
	return 0;
}

void function(const char *pointer){
	
	for( ; *pointer != '\0'; ++pointer){
		printf("%c", *pointer);
	}
	
}
