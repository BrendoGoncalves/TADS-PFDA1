#include <stdio.h>

int main(void){
	
	char x;
	char y;
	
	printf("Type only 2 caracters: ");
	
	x = getch();
	y = getchar();
	
	printf("%c %c", x, y);
	
	return 0;
}
