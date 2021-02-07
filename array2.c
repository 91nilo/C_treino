#include <stdio.h>
#define SIZE 5 //tamanho máximo do array

int main(void)
{
	int s[SIZE]; //o array tem quantidade SIZE de elementos
	
	for (size_t j = 0; j < SIZE; ++j){
		s[j] = 2+2 * j;
	}
	
	printf("%s%13s\n", "Element", "Value");
	
	for (size_t k = 0; k < SIZE; ++k){
		printf("%7u%13d\n", k, s[k]);
	}
	
}

