#include <stdio.h>

int main (){
	int a, b, produto;
	printf("\nDigite um valor: ");
	scanf("%d", &a);
	printf("\nDigite outro valor: ");
	scanf("%d", &b);
	produto = a * b;
	printf("\nProduto dos valores digitados: %d \n", produto);
}