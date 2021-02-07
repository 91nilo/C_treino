#include <stdio.h>
#include <stdlib.h>

int main (){
	int a = 0;
	int b = 0;
	int total = 0;
	printf("Digite um numero inteiro: \n");
	scanf("%d", &a);
	printf("Digite outro numero inteiro: \n");
	scanf("%d", &b);
	total = a+b;
	printf("%d + %d = %d\n", a, b, total);
	total = a-b;
	printf("%d - %d = %d\n", a, b, total);
	total = a*b;
	printf("%d x %d = %d\n", a, b, total);
	total = a/b;
	printf("%d / %d = %d\n", a, b, total);
	
	
}