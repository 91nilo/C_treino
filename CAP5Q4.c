#include <stdio.h>
#include <string.h>

int main(){
	char palavra[50];
	
	printf("Digite uma palavra em minusculo, e eu vou gritar ela para voce e contar as letras: \n");
	scanf("%s", &palavra);
	
	printf("%s tem %d letras", strupr(palavra), strlen(palavra));
	
	return 0;
	
}