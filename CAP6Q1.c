#include <stdio.h>

int diferenca(int a , int b)
{
	int subtracao = a - b;
	
	
	return subtracao;
	
}

int main()
{
	
	int a;
	int b;
	printf("Descobrindo a diferenca entre dois numeros. \n");
	
	//Recebendo o valor de A
	printf("Digite um numero: \n");
	scanf("%d", &a);
	
	//Recebendo o valor de B
	printf("Digite outro numero: \n");
	scanf("%d", &b);
	
	printf("Diferenca entre os numeros: %d \n", (diferenca(a, b)));
	
	return 0;
}