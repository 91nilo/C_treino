#include <stdio.h>
#define FINAL 100
int main(){
	int soma = 0;
	int inicial = 1;
	for(inicial; inicial <= FINAL; inicial++) {
		
		soma = soma + inicial;
	}
	printf("Soma: %d", soma);
}