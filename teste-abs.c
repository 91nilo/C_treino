#include <stdio.h>
#include <stdlib.h>

int main() {
	int var1 = -555;
	
	printf("Valor da variavel: %d\n", var1);
	var1 = abs(var1);
	printf("Valor absoluto da variavel: %d", var1);
	
	return 0;
}