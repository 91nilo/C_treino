#include <stdio.h>
#include <stdlib.h>

int max(int n1, int n2){
	if (n1>n2)
		return n1;
	else
		return n2;
}

int main(){
	int x, y;
	
	printf("Digite um numero inteiro: \n");
	scanf("%d", &x);
	printf("Digite outro numero inteiro: \n");
	scanf("%d", &y);
	
	printf("O maior numero eh %d\n", max(x, y));
	
	return 0;
}