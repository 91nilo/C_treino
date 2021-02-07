#include <stdio.h>

double divisao(double a , double b)
{
	//printf("A = %lf", a);
	//printf("B = %lf", b);
	double divisao = a / b;
	
	
	return divisao;
	
}

int main()
{
	
	double a;
	double b;
	
	printf("Descobrindo a divisao entre dois numeros. \n");
	
	//Recebendo o valor de A
	printf("Digite um numero 'A': \n");
	scanf("%lf", &a);
	
	//Recebendo o valor de B - não pode ser igual a zero!
	
	do 
	{
		printf("Digite um numero 'B': \n");
		scanf("%lf", &b);
	}while(b == 0);
		
	printf("Diferenca entre os numeros: %.3f \n", (divisao(a, b)));
	
	return 0;
}

/*

1100 minha conta

ok - psicologa
ok - D tereza
180 - guga
ok - nalva
175 - sr antonio agua
*/