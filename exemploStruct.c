#include <stdio.h>
#include <string.h>
#include <stdlib.h>

	
	
int main()
{
	struct Estadio
	{
		char[50] nome;
		int capacidade;
		char estado[2];
	}
	
	//criando struct Maracanã
	struct Estadio Maracana
	printf("Nome do estadio: \n");
	gets(Maracana.nome);
	
	printf("Capacidade do estadio: \n");
	scanf("%d", &Maracana.capacidade);
	
	printf("Estado: \n");
	gets(Maracana.estado);
	
	//imprimindo valores
	puts(Maracana.nome);
	printf("Capacidade: %d", Maracana.capacidade);
	puts(Maracana.estado);
	
}