#include <stdio.h>

int main(void){
	int valor1, valor2;
	float media;
	
	printf("%s", "Digite um valor inteiro: ");
	scanf("%d", &valor1);
	puts(" ");
	printf("%s", "Digite outro valor inteiro: ");
	scanf("%d", &valor2);
	
	media = (float) valor1 / valor2;
	
	if(valor2 !=0){
		printf("%lf", media);
	}else{
		puts("Nao e possivel dividir por zero!");
	}
	
	
}