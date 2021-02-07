#include <stdio.h>
#define REPETICAO 10
int main() {
	short numero = 0;
	short contador = 0;
	short resultado = 0;
	do{
	printf("Digite um numero entre um e cem: \n");
	scanf("%d", &numero);
	}while (numero > 100);
		
	
	printf("Tabuada de %d: \n", numero);
	for(contador; contador <= REPETICAO; contador ++){
		resultado = contador * numero;
		printf("%d * %d = %d\n", numero, contador, resultado);
		
	}
	
	return 0;
}