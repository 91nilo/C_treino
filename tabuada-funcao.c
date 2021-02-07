#include <stdio.h>

//mensagem de abertura
void abertura(int m){
	printf("Tabuada do %d\n", m);
}

//cálculo da tabuada
void tabuada(int valor){
	for(int i =1; i <= 10; i++){
	printf("%d x %d = %d\n", valor, i, valor*i);
	}
}

int main (){
	int multiplicador;
	
	do{
		printf("Qual tabuada voce deseja? (de um a dez)\n");
		scanf("%d", &multiplicador);
		}while(multiplicador <= 0 && multiplicador > 10);
		
	abertura(multiplicador);
	
	tabuada(multiplicador);
}