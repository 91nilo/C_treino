#include <stdio.h>
int main(){
	
	double A, B, C;
	double PESOA = 2.0;
	double PESOB = 3.0;
	double PESOC = 5.0;
	
	scanf("%lf", &A);
	scanf("%lf", &B);
	scanf("%lf", &C);
	
	double MEDIA;
	
	MEDIA = ((A*PESOA) + (B*PESOB) + (C*PESOC)) / (PESOA+PESOB+PESOC);
	
	printf("MEDIA = %.1f\n", MEDIA);
	
	return 0;
}