#include <stdio.h>

int opcoes(int escolha){
	switch(escolha)
	{
		case 1:
			printf("Seu saldo e de R$ XX, XX \n");
			break;
		case 2:
			printf("TED - DOC - MESMO BANCO \n");
			break;
		case 3:
			printf("Seu extrato e de R$ XX, XX \n");
			break;
		case 4:
			printf("Extravio - Estorno - Cancelamento - Limite \n");
			break;
		default:
			printf("Nenhuma opcao selecionada.\n");
			
	}
	
	return escolha;
}


int main()
{
	int escolha;
	
	printf("BANCO TESTE \n");
	printf("Escolha uma opcao: \n");
	
	printf("1 - Saldo\n");
	printf("2 - Transferencia\n");
	printf("3 - Extrato\n");
	printf("4 - Cartao\n");
	
	scanf("%d", &escolha);
	opcoes(escolha);
	
	
	
	printf("Sessao finalizada. Obrigado e volte sempre.");
	
	return 0;
	
}