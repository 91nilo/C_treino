
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#define NUMBER OF THREADS 10

void *print hello world(void *tid)
{
	/* Esta funcao imprime o identificador do thread e sai. */
	thread %d\n", tid);
	pthread exit(NULL);
}
	int main(int argc, char *argv[ ]){
/* O programa principal cria 10 threads e sai. */
	pthread t threads[NUMBER OF THREADS];
	int status, i;
	for(i=0; i < NUMBER OF THREADS; i++) {
		thread %d\n", i);
		status = pthread create(&threads[i], NULL, print hello world, (void *)i);
	if (status != 0) {
		printf("Oops. pthread create returned error code %d\n", status);
		exit(-1);
		}
}
exit(NULL);
}