#include <stdio.h>

int main (){
	short var1 = 5; //inteiro menor, 2 bytes;
	int var2 = 10; //inteiro normal, até 4 bytes;
	long var3 = 15; // inteiro grande, até 8 bytes;
	float var4 = 5.5; //real menor, até 4 bytes;
	double var5 = 10.55; //real maior, até 8 bytes;
	
/* 	Para imprimir:
	%c - caracter
	%s - string
	%d - inteiro
	 */
	
	printf("Valor da variavel: %d\n",var1);
	printf("Valor da variavel: %d\n",var2);
	printf("Valor da variavel: %d\n",var3);
	printf("Valor da variavel: %.2f\n",var4);
	printf("Valor da variavel: %.4f\n",var5);	
	
	return 0;
}