#include <stdio.h>

int main(void){
	
	char n1[3] = {'h', 'i', '!'};
	char n2[ ] = {'h', 'i', '!'};
	char n3[3] = {"hi!"};
	char n4[ ] = {"hi!"};
	char n5[3] = "hi!";
	char n6[ ] = "hi!";
	// \0 last caractere
	printf("%s \n", n1);
	printf("%s \n", n2);
	printf("%s \n", n3);
	printf("%s \n", n4);
	printf("%s \n", n5);
	printf("%s \n", n6);
	
	return 0;
}
