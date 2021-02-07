#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {

    printf("************************************\n");
    printf("* Bem vindo ao Jogo de Adivinhacao *\n");
	printf("									\n");
	printf("			    .eeeee.					\n");
	printf("			 e8*   8   *8e          \n");
	printf("			d8     8     8b         \n");
	printf("			8!   .dWb.   !8         \n");
	printf("			Y8 .e* 8 *e. 8P         \n");
	printf("			 *8*   8   *8*          \n");
	printf("			   **ee8ee**            \n");
    printf("************************************\n");
	
	

    int chute;
    int acertou = 0;
    int tentativas = 1;
    double pontos = 1000;
	
	int nivel;
	printf("Qual o nivel de dificuldade?\n");
	printf(" (1) Facil\n (2) Medio\n (3) Dificil\n\n");
	scanf("%d", &nivel);
	
	int numerodetentativas;
	
	/*if(nivel == 1){
		numerodetentativas = 21;
	}else if (nivel == 2){
		numerodetentativas = 11;
	} else {
		numerodetentativas = 6;
	}*/
	switch(nivel){
		case 1:
			numerodetentativas = 21;
			break;
		case 2:
			numerodetentativas = 11;
			break;
		default:
			numerodetentativas = 6;
			break;
	}
	
	
    srand(time(0));
    int numerosecreto = rand() % 100;

    for(int i = 1; i < numerodetentativas; i++ ) {

        printf("Qual e o seu %do. chute? ", tentativas);
        scanf("%d", &chute);

        if(chute < 0) {
            printf("Voce nao pode chutar numeros negativos\n");
            continue;
        }

        printf("Seu %do. chute foi %d\n", tentativas, chute);

        acertou = chute == numerosecreto;
        int maior = chute > numerosecreto;

        if(acertou) {
          break;
        } else if(maior) {
            printf("Seu chute foi maior do que o numero secreto!\n");
        } else {
            printf("Seu chute foi menor do que o numero secreto!\n");
        }

        tentativas++;

        double pontosperdidos = abs(chute - numerosecreto) / 2.0;
        pontos = pontos - pontosperdidos;
    }
	if(acertou){
	printf("Parabens! Voce acertou!\n");
	printf("Voce acertou em %d tentativas\n", tentativas);
	printf("Voce fez %.2f pontos", pontos);
    
	}else {
	printf("Eita! Tente de novo. \n");
	printf("Numero secreto: %d \n", numerosecreto);
	printf("	 /\\_/\\		\n");
	printf("	( o.o )     \n");
	printf("	 > ^ <      \n");
	
	}
    

}