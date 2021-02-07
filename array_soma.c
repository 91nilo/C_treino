#include <stdio.h>

 void soma (int numeros[10]){
	int valorfinal = 0;
	
	for(int r = 0; r < 10; r++){
		valorfinal += numeros[r];
	}
	
	 printf("Valor final: %d", valorfinal);
	
} 

int main(){
	int numeros[10];
	
	for(int i = 0; i < 10; i++){
		numeros[i] = i;
	}
	
	soma(numeros);
	
}