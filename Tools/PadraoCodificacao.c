#include <stdio.h>

/* Práticas e Ferramentas de Desenvolvimento de Software 
    Brendo Oliveira Gonçalves     SP3047237    São Paulo (SP)
    Instituto Federal de São Paulo Linux (Ubuntu) 23/10/2020
    Professor Thiago de Jesus Inocêncio     Deus seja louvado  */

int main(void){
	
	int idadeCachorro;
	float massaCachorro;

	printf("Qual a idade do seu cachorro?\n");
	scanf("%i", &idadeCachorro);
	printf("Qual a massa do seu cachorro?\n");
	scanf("%f", &massaCachorro);

	if(idadeCachorro <= 2){

		if(massaCachorro > 10){
			printf("Filhote pesado\n");
		}else{
			printf("Filhote leve\n");
		}

	}else{
		printf("Cachorro adulto.\n\a");
	}
	
	return 0;
}

