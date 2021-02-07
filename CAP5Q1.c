#include <stdio.h>
#include <stdlib.h>


int main(){
	float notas[3];
	float media;
	int i;
	int k;
	
	
	for(i = 0; i <= 2; i++){
		printf("Digite a nota %d do aluno: \n", i);
		scanf("%f", &notas[i]);	
		
	}
	
	printf("\nNotas do aluno: \n");

	for(k = 0; k <= 2; k++){
		printf("%.2f ", notas[k]);
		printf(" \n");
	}
	
	media = (notas[0] + notas[1]+ notas[2]) / 3;
	printf("A media do aluno foi de %.2f\n", media);
	if(media >= 7){
		printf("Aluno aprovado.");
	}else{
		printf("Aluno reprovado.");
	}
	
	return 0;
}