#include <stdio.h>

void potencia (int b, int e, int* valor){
	*valor = 1;
	
	for(int i = 0; i < e; i++) {
    *valor = *valor * b;
    }
}

int main(){
	
	int base, expoente;
	int valor;
	
	printf("Insira a base: \n");
	scanf("%d", &base);
	
	printf("Insira o expoente: \n");
	scanf("%d", &expoente);

	potencia(base, expoente, &valor);
	
	printf("Valor da potencia: \n");
	printf("%d", valor);
}