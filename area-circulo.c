#include <stdio.h>
#include <math.h>
#define N  3.14159
int main () {
	double area = 0;
	double raio = 0;
	scanf("%lf", &raio);
	raio = pow(raio,2);
	area = N * raio;
	printf("A=%.4lf\n", area);
	
	return 0;
}
	