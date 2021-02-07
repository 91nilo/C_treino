#include <stdio.h>

int main(){
	char texto[31];
	char nome[8];
	
	printf("Digite seu nome: \n");
	scanf("%s", nome);
	sprintf(texto, "hoje o dia vai ser massa de bom!");
	printf("Oi %s, %s", nome , texto);
	
}