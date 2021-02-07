#include <stdio.h>

void swap(int * x, int * y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

int main()
{
	int x = 10;
	int y = 5;
	int temp = 2;
	
	printf("temp = %d, x = %d, y = %d\n", temp, x, y);
	
	temp = x;
	printf("temp = %d, x = %d, y = %d\n", temp, x, y);
	
	x = y;
	printf("temp = %d, x = %d, y = %d\n", temp, x, y);
	
	y = temp;
	printf("temp = %d, x = %d, y = %d\n", temp, x, y);
	
	/* 
	printf("Digite um numero inteiro: \n");
	scanf("%d", &x);
	printf("Digite outro numero inteiro: \n");
	scanf("%d", &y);
	
	printf("X = %d, Y = %d \n", x, y);
	
	swap(&x, &y);
	
	printf("X = %d, Y = %d \n", x, y); */
	
	return 0;
}