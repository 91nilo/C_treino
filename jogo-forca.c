#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include "forca.h"



char palavrasecreta[TAMANHO_PALAVRA];
char chutes[26];
int chutesdados = 0;	

void abertura(){
	printf("/****************/\n");
	printf("/ Jogo de Forca */\n");
	printf("/****************/\n\n");
}
		
void chuta(){	
	char chute;
	printf("Qual a letra? \n");
	scanf(" %c", &chute); /*Se não der o espaço antes do %c ele lê o caractere digitado + enter */
	
	chutes[chutesdados] = chute;
	chutesdados++;	
}	

int jachutou(char letra){
	int achou = 0;
	for(int j = 0; j < chutesdados; j++){
		if(chutes[j] == letra){
			achou = 1;
			break;
		}
	}
			
	return achou;		
}		

void desenhaforca(){
	
	
	for(int i = 0; i < strlen(palavrasecreta); i++){
			
		if(jachutou(palavrasecreta[i])){
			printf("%c ", palavrasecreta[i]);
		}else {
			printf("_ ");
		}	
	}
		printf("\n");
		
}

void adicionapalavra(){
	char quer;
	
	printf("Voce deseja adicionar uma palavra ao jogo? (S/N)\n");
	scanf(" %c", &quer);
	
	if(quer == 'S'){
		char novapalavra[TAMANHO_PALAVRA];
		printf("Qual a nova palavra?");
		scanf("%s", novapalavra);
		
		FILE* f;
		
		f = fopen("palavras.txt", "r+");
		
		if(f == 0){
		printf("Desculpe, banco de dados não disponível.\n");
		exit(1);
	}
		int qtd;
		fscanf(f, "%d", &qtd);
		qtd++;
		
		fseek(f, 0, SEEK_SET);
		fprintf(f, "%d", qtd);
		
		fseek(f, 0 ,SEEK_END);
		fprintf(f, "\n%s", novapalavra);
		fclose(f);
		
	}
}

void escolhepalavra(){
	
	FILE* f;
	f = fopen("palavras.txt", "r");
	if(f == 0){
		printf("Desculpe, banco de dados não disponível.\n");
		exit(1);
	}
	
	
	int qtddepalavras;
	fscanf(f, "%d", &qtddepalavras);
	
	srand(time(0));
	int randomico = rand() % qtddepalavras;
	
	for(int i = 0; i<= randomico; i++ ){
		fscanf(f, "%s", palavrasecreta);
		
	}
	
	fclose(f);
}

int ganhou(){
	for(int i = 0; i < strlen(palavrasecreta); i++){
		if(!jachutou(palavrasecreta[i])){
			return 0;
		}
	}
	
	return 1;
}

int enforcou(){
	
	int erros = 0;
	for(int i = 0; i < chutesdados; i++){
		int existe = 0;
		
		for(int j = 0; j < strlen(palavrasecreta); j++){
			if(chutes[i] == palavrasecreta[j]){
				
				existe = 1;
				break;
			}
		}
		
	if(!existe) erros++;
	
	}
	return erros >= 5;
}

int main(){
	
	abertura();
	escolhepalavra();

	do{
		desenhaforca();
		chuta();
	
	} while(!ganhou() && !enforcou());
	
	if(acertou()){
		printf("Parabens! Voce venceu!\n");
	}else{
		printf("Voce perdeu! Tente de novo!\n");
	}
	
	adicionapalavra();
}