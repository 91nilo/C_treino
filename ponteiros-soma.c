#include <stdio.h>

void soma(int a, int b, int* num){
	
	(*num) = a + b;
}

int main(){
	
	
	int a, b;
	int num;
	
	printf("Digite um inteiro: \n");
	scanf("%d", &a);
	printf("Digite outro inteiro: \n");
	scanf("%d", &b);
	
	soma(a, b, &num);
	
	printf("SOMA = %d", num);
	
	
}