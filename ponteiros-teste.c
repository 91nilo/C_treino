#include <stdio.h>

void calcula(int* c) {
	(*c)++;
	
}

/* 
Ponteiros em C são utilizados para conseguir utilizar
a mesma variável em outra função. 
*/

int main(){
	
	
	int c;
	printf("main %d %d\n", c, &c);
	c = 10;
	printf("main %d %d\n", c, &c);
	calcula(&c);
	printf("main %d %d\n", c, &c);
	
}